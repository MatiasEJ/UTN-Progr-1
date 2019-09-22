#include <stdio.h>
#include "main.c"
#include "func.h"

void inicializar(matriz ma, int zona, int dias){
    for(int i=0;i<dias;i++){
        for(int j=0;j<zona;j++){
            ma[j+1][i+1] = 0;

        }
    }
}


void cargar(matriz ma, int zona, int dias){
    int i,j,cant;
    printf("\nCargar cantidad de agua:\n");
    for(int i=0;i<dias;i++){
        for(int j=0;j<zona;j++){
            printf("dia [%d] zona [%d]: ",i+1,j+1);
            scanf("%d",&cant);
            ma[j+1][i+1]=ma[j+1][i+1]+cant;
        }
    }
}

//    Otra forma.
//    cant agua.


//mostrar matriz

void mostrar(matriz ma, int zona, int dias){
    int i,j;
    printf("\n Contenido de la matriz: \n");
    printf("\n          z1  z2  z3  z4     \n");



    for (i=0;i<dias;i++){ //filas
        printf("dia [%d]: ",i+1);
        for (j=0;j<zona;j++){ //col
            printf("  %d ",ma[j+1][i+1]);
        }
        printf("\n");
    }
}

void procFil(matriz ma, vector vec, int zona, int dias){
    int i,j,aux=0;
    printf("\n");
    for(int i=0;i<dias;i++){
        vec[i]=0;
        for(int j=0;j<zona;j++){
            vec[i]=vec[i]+ma[j+1][i+1];
        }

    }
    for(int i=0;i<dias;i++){
        printf("\nDia %d total agua x zonas: [%d]",i+1,vec[i]);

    }

    printf("\n-------------\n");

}

void procCol(matriz ma, vector vec, int zona, int dias){
    int i,j,aux=0;
    for(int i=0;i<zona;i++){
        vec[i]=0;
        for(int j=0;j<dias;j++){
            vec[i]=vec[i]+ma[i+1][j+1];
        }
    }

    for(int i=0;i<zona;i++){
        printf("\nZona %d temperatura total: [%d]",i+1,vec[i]);

    }
     printf("\n-------------\n");

}

////
void ordenaEmite(vector vec, int dias){
 //    //total de agua caida por dia ordenada de forma decreciente y acompañada por el nombre del dia correspondiente. e
//    //intercambiuo doble
    palabra vaux[]={"lunes", "martes", "miercoles","jueves","viernes"};
    palabra aux2;
    int i,j,aux=0;

    for(int i=0;i<dias;i++){
        if( vec[i] < vec[i+1]){
            aux=vec[i];
            vec[i]=vec[i+1];
            vec[i+1]=aux;
//            copia vectores
            strcpy(aux2,vaux[i]);
            strcpy(vaux[i],vaux[i+1]);
            strcpy(vaux[i+1],aux2);
        }
    }
    printf("  Dia   Temperatura  ");
    for(i=0;i<dias;i++){
        printf("\n[%s ----> %d]",vaux[i],vec[i]);

    }


}
