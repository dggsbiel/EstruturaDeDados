//enqueue para adicionar
//dequeue para remover
//fila (first in, first out)
//precisa ter um indicador de primeiro da fila e ultimo da fila
// criar tipo abstrato de dados(fila.h, fila.c,main.c)
#include "fila.h"
#include<stdio.h>
#include<stdlib.h>

void criafila(int *vetor,int tf){
    vetor = (int*)malloc(tf*sizeof(int));
    printf("pilha criada!\n");
}

void enqueue(int *vetor,int *inp, int *inu,int t, int val){
    if(*inu == t){
        *inu = 0;
    }
     vetor[*inu]=val;
    *inu = *inu + 1;
    
    printf("valor adicionado a fila: %d\n",vetor[*inu-1]);
}


int dequeue(int *vetor,int *inp, int *inu,int t){
    if(*inp == t){
         *inp=0;
    }
     *inp = *inp + 1;
    printf("valor removido: %d\n",vetor[*inp-1]);
   
    return vetor[*inp-1];
}
