#include <stdio.h>
#include "func.h"

void cargar(vector w,int t){
    int i;
    for(i=0;i<t;i++){
        printf("Ingrese el valor de v[%d]: ",i);
        scanf("%f",&w[i]);
    }
}


void emitir (vector w, int t){
    int i;
    for(i=0;i<t;i++){
        printf("\nv[%d]: %.2f",i,w[i]);
    }
}
