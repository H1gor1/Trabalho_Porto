#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "funcoesPorto.h"
#include "FilaNavios.h"
#include "pilhaContainers.h"
#define LIMITE_TEMPO 1000 //Define quantas unidades de tempo irá ser simulado.

int calcularTempoMedio (TipoFila fila){
    int quantidadeTotalContainersFila; //Quantidade de containers em uma fila

    quantidadeTotalContainersFila = somarQuantidadeContainersFila(fila);
    if (quantidadeTotalContainersFila == 0){
        return 0;
    }

    return quantidadeTotalContainersFila / TamanhoFila(fila);
}

int main() {
    srand(time(NULL));
    TipoFila fila1, fila2, fila3, fila4;
    FFVazia(&fila1);
    FFVazia(&fila2);
    FFVazia(&fila3);
    FFVazia(&fila4);

    TipoTravessa travessas[5];
    for (int i = 0; i < 5; i++) {
        FazPilhaVaziaT(&(travessas[i].Containers));
        travessas[i].quantidadeContainers = 0;
        travessas[i].situation = 0;
    }

    int navioID = 1; // ID inicial do primeiro navio
    int unidadeTempo = 0; // Contador de unidade de tempo
    //int travessaAtual = 0; // Índice da travessa atual

    while (1) {
        printf("----------------------------Situacao da simulacao----------------------------\n");
        printf("Unidade de tempo: %d\n", unidadeTempo);
        /*---------------------Geração de navios e enfileiramento---------------------*/
        int quantidadeNaviosAGerar = gerarNumeroAleatorio(0, 3);
        for (int i = 0; i < quantidadeNaviosAGerar; i++) {
            // Gera um novo navio
            TipoNavio novoNavio = gerarNavio(navioID);

            // Enfileira o navio de forma uniforme nas filas
            enfileirarNavioUniforme(&novoNavio, &fila1, &fila2, &fila3, &fila4);

            navioID++; // Incrementa o ID para o próximo navio
        }

        /*---------------------Parte do código das gruas e travessas---------------------*/
        grua(&fila1, &fila2, &fila3, &fila4, travessas);

            // Avança para a próxima travessa
            //travessaAtual = (travessaAtual + 1) % 5;

        unidadeTempo++; // Incrementa a unidade de tempo

        // Imprime a situação das filas
        printf("Fila 1: %d navios | Tempo medio de fila: %d unidades de tempo\n", TamanhoFila(fila1), calcularTempoMedio(fila1));
        printf("Fila 2: %d navios | Tempo meedio de fila: %d unidades de tempo\n", TamanhoFila(fila2), calcularTempoMedio(fila2));
        printf("Fila 3: %d navios | Tempo medio de fila: %d unidades de tempo\n", TamanhoFila(fila3), calcularTempoMedio(fila3));
        printf("Fila 4: %d navios | Tempo medio de fila: %d unidades de tempo\n", TamanhoFila(fila4), calcularTempoMedio(fila4));
        printf("\n");

        // Verifica se a fila 1 não está vazia
        if (!FVazia(fila1)) {
            printf("Navio descarregando na Fila 1: ID = %d\n", fila1.Frente->Prox->Navio.id);
        } else {
            printf("Fila 1 vazia\n");
        }

        // Verifica se a fila 2 não está vazia
        if (!FVazia(fila2)) {
            printf("Navio descarregando na Fila 2: ID = %d\n", fila2.Frente->Prox->Navio.id);
        } else {
            printf("Fila 2 vazia\n");
        }

        // Verifica se a fila 3 não está vazia
        if (!FVazia(fila3)) {
            printf("Navio descarregando na Fila 3: ID = %d\n", fila3.Frente->Prox->Navio.id);
        } else {
            printf("Fila 3 vazia\n");
        }

        // Verifica se a fila 4 não está vazia
        if (!FVazia(fila4)) {
            printf("Navio descarregando na Fila 4: ID = %d\n", fila4.Frente->Prox->Navio.id);
        } else {
            printf("Fila 4 vazia\n");
        }

        //Imprime a situacao das travessas
        for (int i = 0; i < 5; i++) {
            if(travessas[i].situation == 0){
                printf("Travessa %d disponivel: %d containers\n", i + 1, travessas[i].quantidadeContainers);
            } else if(travessas[i].situation == 1){
                printf("Travessa %d Voltando: %d containers\n", i + 1, travessas[i].quantidadeContainers);
            } else {
                printf("Travessa %d Cheia: %d containers\n", i + 1, travessas[i].quantidadeContainers);
            }
        }

        // Verifica se chegou ao limite de tempo desejado
        if (unidadeTempo == LIMITE_TEMPO) {
            break; // Sai do loop
        }

        sleep(1); //Delay de uma unidade de tempo para outra, para ficar mais parecido com uma simulacao, caso queira deixar mais lento é só aumentar o número.
    }

    return 0;
}


