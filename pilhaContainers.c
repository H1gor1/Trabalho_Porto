#include "pilhaContainers.h"
#include <stdio.h>
void FazPilhaVazia(TipoPilha *pilha){
    pilha->Topo = 0;
}

void FazPilhaVaziaT(TipoPilhaT *pilha){
    pilha->Topo = 0;
}

int PVazia(TipoPilha pilha) {
    return (pilha.Topo == 0);
}

int PVaziaT(TipoPilhaT pilha) {
    return (pilha.Topo == 0);
}

void Empilha(TipoContainer x, TipoPilha *Pilha){
    if(Pilha->Topo == MAXTAM){
        printf("Erro: pilha esta cheia\n");
    } else{
        Pilha->Topo++;
        Pilha->Container[Pilha->Topo-1] = x;
    }
}

void EmpilhaT(TipoContainer x, TipoPilhaT *Pilha){
    if(Pilha->Topo == MAXTAM){
        printf("Erro: pilha esta cheia\n");
    } else{
        Pilha->Topo++;
        Pilha->Container[Pilha->Topo-1] = x;
    }
}

TipoContainer Desempilha(TipoPilha *Pilha, TipoContainer *Container){
    if(PVazia(*Pilha)){
        printf("Erro pilha esta vazia\n");
    } else {
        *Container = Pilha->Container[Pilha->Topo-1];
        Pilha->Topo--;

        return *Container;
    }
}

TipoContainer DesempilhaT(TipoPilhaT *Pilha, TipoContainer *Container){
    if(PVaziaT(*Pilha)){
        printf("Erro pilha esta vazia\n");
    } else {
        *Container = Pilha->Container[Pilha->Topo-1];
        Pilha->Topo--;

        return *Container;
    }
}

int Tamanho(TipoPilha Pilha){
    return (Pilha.Topo);
}



