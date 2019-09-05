/**
//INTERCALACION DE VECTORES
*/
#include <stdio.h>
#define n 10

//parcial 19 de septiembre


typedef int vector[n];

void carga (vector ,int );
void ordenar (vector ,int );
void imprimir1 (vector, int);
void inter (vector,vector,vector,int,int);


void main (){

    int tam1, tam2; //cantidad elementos para vector 1 y 2;
    vector v1,v2,v3;

    //DEFINIR TAMAÑO VECTOR
    printf("Ingrese tamaño del vector 1(<5): ");
    scanf("%d",&tam1);
    printf("Ingrese tamaño del vector 2 (<5): ");
    scanf("%d",&tam2);

    //CARGA DE VECTORES
    printf("\nVector 1:\n");
    carga(v1,tam1);

    printf("\nVector 2:\n");
    carga(v2,tam2);
//
//    //ORDENAMIENTO
//    ordenar(v1,tam1);
//    ordenar(v2,tam2);

    //INTERCALAR
    inter(v1,v2,v3,tam1, tam2);


    //EMITIR --> t3???? <---
    printf("\nVector 3:\n");
    imprimir1(v3,(tam1+tam2));
       /**
        //ingresar tamaño para v1 y v2, tal que: v1+v2<n
        //cargar v1
        //cargar v2
        //intercalar(v1,v2,v3,t1,t2);
        //emitir(v3,t3);
    */

}

void carga (vector w,int t){
    int i;
    for(i=0;i<t;i++){
        printf("Ingrese el valor de v[%d]: ",i);
        scanf("%d",&w[i]);
    }
}

void ordenar (vector w,int t){
    int aux,i,j;
    for(i=0;i<t-1;i++){
        for(j=i+1;j<t;j++){
                if( w[i]>w[j] ){
                    //intercambio
                    aux = w[i];
                    w[i] = w[j];
                    w[j] = aux;
                }
        }
    }
}


void imprimir1 (vector w, int t){
    int i;
    for(i=0;i<t+1;i++){
        printf("%d, ",i,w[i]);
    }
}

void inter(vector v1, vector v2,vector v3,int tam1,int tam2){
    int i=0,j=0,k=0; //I=v1, j=v2. k=3
    while(i<tam1 && j<tam2){
        if(v1[i]<v2[j]){
            v3[k]=v1[i];
            i++;
            k++;

        }else{
            v3[k]=v2[j];
            j++;
            k++;

        }
    }

    //Cuando uno de los dos vectores se termina, pasamos los elementos que quedan en el otro.

    if(i==tam1){
        for(int l=j;l<tam2;l++){
            v3[k]=v2[l];
            k++;
        }
    }else{
        for(int l=i;l<tam1;l++){
            v3[k]=v1[l];
            k++;
        }

    }


}
