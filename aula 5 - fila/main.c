//enqueue para adicionar
//dequeue para remover
//fila (first in, first out)
//precisa ter um indicador de primeiro da fila e ultimo da fila
// criar tipo abstrato de dados(fila.h, fila.c,main.c)


#include "fila.h"
#include <stdio.h>

int main(){
    int *fila;
    int ip=0;
    int iu=0;
    int valdig;
    int tamanhofila=5;
    scanf("%d",&valdig);
    criafila(fila,tamanhofila);
    enqueue(fila,&ip,&iu,tamanhofila, valdig);
    enqueue(fila,&ip,&iu,tamanhofila, valdig);
    enqueue(fila,&ip,&iu,tamanhofila, 30);
    enqueue(fila,&ip,&iu,tamanhofila, 40);
    enqueue(fila,&ip,&iu,tamanhofila, 80);
    dequeue(fila,&ip,&iu,tamanhofila);
    dequeue(fila,&ip,&iu,tamanhofila);
    dequeue(fila,&ip,&iu,tamanhofila);
    return 0;
}
