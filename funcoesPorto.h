#ifndef TRABALHOED_FUNCOESPORTO_H
#define TRABALHOED_FUNCOESPORTO_H
#include "FilaNavios.h"
#include "pilhaContainers.h"

int gerarNumeroAleatorio(int min, int max);
TipoNavio gerarNavio(int navioID);
void enfileirarNavioUniforme(TipoNavio* navio, TipoFila* fila1, TipoFila* fila2, TipoFila* fila3, TipoFila* fila4);
void grua(TipoFila* fila1, TipoFila* fila2, TipoFila* fila3, TipoFila* fila4, TipoTravessa travessas[]);
void esvaziarTravessa(TipoTravessa* travessa);

#endif //TRABALHOED_FUNCOESPORTO_H
