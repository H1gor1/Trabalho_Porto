#ifndef TRABALHOED_FILANAVIOS_H
#define TRABALHOED_FILANAVIOS_H
#include "pilhaContainers.h"

typedef struct TipoCelula *TipoApontador;

typedef struct TipoNavio {
    int id;
    int quantidadeTempoDesc;
    TipoPilha PilhasContainers[4];
    int quantidadeContainers;
} TipoNavio;

typedef struct TipoCelula {
    TipoNavio Navio;
    TipoApontador Prox;
} TipoCelula;

typedef struct TipoFila {
    TipoApontador Frente, Tras;
} TipoFila;

void FFVazia(TipoFila *Fila);
int FVazia(TipoFila Fila);
void Enfileira(TipoNavio *navio, TipoFila *fila);
void Desenfileira(TipoFila *Fila, TipoNavio *Navio);
int TamanhoFila(TipoFila Fila);

int somarQuantidadeContainersFila(TipoFila fila);

#endif //TRABALHOED_FILANAVIOS_H
