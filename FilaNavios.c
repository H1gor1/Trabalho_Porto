#include "FilaNavios.h"
#include <stdio.h>
#include <stdlib.h>

void FFVazia(TipoFila *Fila){
    Fila->Frente = (TipoApontador) malloc(sizeof(TipoCelula));
    Fila->Tras = Fila->Frente;
    Fila->Frente->Prox = NULL;
}

int FVazia(TipoFila Fila){
    return (Fila.Frente->Prox == NULL);
}

void Enfileira(TipoNavio *navio, TipoFila *fila) {
    TipoCelula *novaCelula = (TipoCelula*) malloc(sizeof(TipoCelula));
    if (novaCelula == NULL) {
        printf("Erro: falha na alocação de memória.\n");
        exit(1);
    }

    novaCelula->Navio = *navio;
    novaCelula->Prox = NULL;

    if (FVazia(*fila)) {
        fila->Frente->Prox = novaCelula; // Atualiza o próximo do frente
    } else {
        fila->Tras->Prox = novaCelula;
    }

    fila->Tras = novaCelula;
}

void Desenfileira(TipoFila *Fila, TipoNavio *Navio){
    TipoApontador q;
    if(FVazia(*Fila)){
        printf("Erro fila esta vazia\n");
        return;
    }

    q = Fila->Frente->Prox; // Atualiza o q para o próximo do frente
    Fila->Frente->Prox = q->Prox;
    *Navio = q->Navio;
    free(q);
}

int TamanhoFila(TipoFila Fila) {
    TipoApontador p = Fila.Frente->Prox;
    int tamanho = 0;

    while (p != NULL) {
        tamanho++;
        p = p->Prox;
    }

    return tamanho;
}

int somarQuantidadeContainersFila(TipoFila fila) {
    TipoApontador apontador = fila.Frente->Prox;
    int quantidadeTotal = 0;

    while (apontador != NULL) {
        quantidadeTotal += apontador->Navio.quantidadeContainers;
        apontador = apontador->Prox;
    }

    return quantidadeTotal;
}