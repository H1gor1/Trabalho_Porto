#ifndef TRABALHOED_PILHACONTAINERS_H
#define TRABALHOED_PILHACONTAINERS_H
#define MAXTAM 5

typedef int TipoApontadorP;

typedef struct TipoContainer{
    int numeroContainer;
}TipoContainer;

typedef struct TipoPilha{
    TipoContainer Container[10];
    TipoApontadorP Topo;
}TipoPilha;

typedef struct TipoPilhaT{
    TipoContainer Container[10];
    TipoApontadorP Topo;
}TipoPilhaT;

typedef struct TipoTravessa{
    TipoPilhaT Containers;
    int quantidadeContainers;
    int situation; //0 = disponível 1 = desempilhando 2 = cheia
}TipoTravessa;

void FazPilhaVazia(TipoPilha *pilha);
void FazPilhaVaziaT(TipoPilhaT *pilha);
int PVazia(TipoPilha pilha);
int PVaziaT(TipoPilhaT pilha);
void Empilha(TipoContainer x, TipoPilha *Pilha);
void EmpilhaT(TipoContainer x, TipoPilhaT *Pilha);
TipoContainer Desempilha(TipoPilha *Pilha, TipoContainer *Container);
TipoContainer DesempilhaT(TipoPilhaT *Pilha, TipoContainer *Container);
int Tamanho(TipoPilha Pilha);


#endif //TRABALHOED_PILHACONTAINERS_H
