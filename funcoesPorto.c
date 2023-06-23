#include <stdio.h>
#include <stdlib.h>
#include "funcoesPorto.h"
#include "FilaNavios.h"
#include "pilhaContainers.h"

int gerarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

TipoNavio gerarNavio(int navioID) {
    TipoNavio navio;
    navio.id = navioID;
    navio.quantidadeTempoDesc = 0;
    navio.quantidadeContainers = 0;

    int quantidadeContainers = gerarNumeroAleatorio(4, 16); // Gera quantidade de contêineres aleatória

    // Divide a quantidade de contêineres igualmente entre as 4 pilhas
    int quantidadeContainersPorPilha = quantidadeContainers / 4;

    for (int i = 0; i < 4; i++) {
        TipoPilha pilha;
        FazPilhaVazia(&pilha);

        for (int j = 0; j < quantidadeContainersPorPilha; j++) {
            TipoContainer container;
            container.numeroContainer = j + 1;
            Empilha(container, &pilha);
            navio.quantidadeContainers++;
        }
        navio.PilhasContainers[i] = pilha;
    }

    // Imprime informações do navio gerado
    printf("Navio gerado: ID %d, Quantidade de Containers: %d\n", navio.id, navio.quantidadeContainers);

    return navio;
}

void enfileirarNavioUniforme(TipoNavio* navio, TipoFila* fila1, TipoFila* fila2, TipoFila* fila3, TipoFila* fila4) {
    int quantidadeTotalFila1 = somarQuantidadeContainersFila(*fila1);
    int quantidadeTotalFila2 = somarQuantidadeContainersFila(*fila2);
    int quantidadeTotalFila3 = somarQuantidadeContainersFila(*fila3);
    int quantidadeTotalFila4 = somarQuantidadeContainersFila(*fila4);

    int menorQuantidadeTotal = quantidadeTotalFila1;
    if (quantidadeTotalFila2 < menorQuantidadeTotal)
        menorQuantidadeTotal = quantidadeTotalFila2;
    if (quantidadeTotalFila3 < menorQuantidadeTotal)
        menorQuantidadeTotal = quantidadeTotalFila3;
    if (quantidadeTotalFila4 < menorQuantidadeTotal)
        menorQuantidadeTotal = quantidadeTotalFila4;

    if (quantidadeTotalFila1 == menorQuantidadeTotal) {
        Enfileira(&(*navio), fila1); // Passa o endereço do ponteiro navio
        printf("Navio enfileirado na Fila 1\n");
    } else if (quantidadeTotalFila2 == menorQuantidadeTotal) {
        Enfileira(&(*navio), fila2); // Passa o endereço do ponteiro navio
        printf("Navio enfileirado na Fila 2\n");
    } else if (quantidadeTotalFila3 == menorQuantidadeTotal) {
        Enfileira(&(*navio), fila3); // Passa o endereço do ponteiro navio
        printf("Navio enfileirado na Fila 3\n");
    } else if (quantidadeTotalFila4 == menorQuantidadeTotal) {
        Enfileira(&(*navio), fila4); // Passa o endereço do ponteiro navio
        printf("Navio enfileirado na Fila 4\n");
    }
}

void grua(TipoFila* fila1, TipoFila* fila2, TipoFila* fila3, TipoFila* fila4, TipoTravessa travessas[]) {
    TipoNavio* navios[4] = { NULL };
    TipoFila* filas[4] = { fila1, fila2, fila3, fila4 };

    for (int i = 0; i < 4; i++) {
        TipoFila* fila = filas[i];
        if (!FVazia(*fila)) {
            navios[i] = &(fila->Frente->Prox->Navio);
            TipoContainer container;
            TipoPilha *pilha = &(navios[i]->PilhasContainers[0]);
            int j = 0;

            //Controle de qual pilha do navio está sendo desempilhada
            while (PVazia(*pilha) && navios[i]->quantidadeContainers > 0) {
                j = (j + 1) % 4;
                pilha = &(navios[i]->PilhasContainers[j]);
            }

            Desempilha(pilha, &container);

            navios[i]->quantidadeContainers--;

            //Escolhe em qual travessa deve empilhar, usando a quinta apenas quando a travessa está cheia ou voltando do pátio.
            if (travessas[i].situation == 0) {
                EmpilhaT(container, &(travessas[i].Containers));
                travessas[i].quantidadeContainers++;
            } else {
                EmpilhaT(container, &(travessas[4].Containers));
                travessas[4].quantidadeContainers++;
            }

            if(travessas[i].quantidadeContainers == 5){
                travessas[i].situation = 2;
            }
            if(travessas[4].quantidadeContainers == 5){
                travessas[4].situation = 2;
            }

            navios[i]->quantidadeTempoDesc++;
            //Se o navio foi totalmente desempilhado, ele é desenfileirado da fila de navios
            if (navios[i]->quantidadeContainers == 0) {
                Desenfileira(fila, navios[i]);
            }
        }
    }
    printf("\n-----------------------\n");
    printf("Situacao carrinho: \n");

    // Verifica se alguma das quatro primeiras travessas atingiu a capacidade máxima
    for (int i = 0; i < 4; i++) {
        if (travessas[i].situation != 0) {
            if(travessas[i].situation == 2){
                printf("Travessa %d esta cheia e indo para o patio\n", i+1);
                esvaziarTravessa(&(travessas[i]));
                travessas[i].situation--;
            } else if(travessas[i].situation == 1){
                printf("Travessa %d foi esvaziada e esta voltando\n", i+1);
                travessas[i].situation = 0;
            }
        }
    }

    // Verifica se a quinta travessa atingiu a capacidade máxima
    if (travessas[4].quantidadeContainers >= 5) {
        // Desempilha completamente a travessa
        if (travessas[4].situation != 0) {
            if(travessas[4].situation == 2){
                printf("Travessa 5 está cheia e indo para o patio\n");
                esvaziarTravessa(&(travessas[4]));
                travessas[4].situation--;
            } else if(travessas[4].situation == 1){
                printf("Travessa 5 foi esvaziada e esta voltando\n");
                travessas[4].situation = 0;
            }
        }
        // Atualiza o índice da travessa atual
        //*travessaAtual = (*travessaAtual + 1) % 4;
    }
    printf("-----------------------\n");
}


//Função que esvazia uma travessa quando está cheia
void esvaziarTravessa(TipoTravessa* travessa) {
    // Esvazia a travessa, removendo todos os containers
    while (!PVaziaT(travessa->Containers)) {
        TipoContainer container;
        DesempilhaT(&(travessa->Containers), &container);
        travessa->quantidadeContainers--;
    }
}