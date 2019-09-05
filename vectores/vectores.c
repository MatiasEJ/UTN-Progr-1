#include <stdio.h>
#define n 5

void main (){
    typedef int vector[n];  //identificador de una descripcion.
         //definiendo entero como int
           //x sera un entero
    vector v,vectoraux;
    int i,max;
    int p=0;


    for(i=0;i<n;i++){
            printf("\nIngrese el valor de v[%d]:  ",i);
            scanf("%d",&v[i]);
    }

    //EMITIR VALORES PARES y posiciones pares

    for(i=0;i<n;i++){
        if( v[i]%2==0 ){
                printf("\nv[%d]: es par",i);
                vectoraux[p] = i;
                p++;
        }
        max = v[0];
        if(v[i]> max){
            max = v[i];
        }
    }

    printf("\nPosiciones de los numeros pares: ");
    for(i=0;i<p;i++){
        printf(" %d",i,vectoraux[i]);
    }

    // Como sacar promedio

    printf("\nEl maximo es: %d",max);
    printf("El nombre de v es: %d",&v[0]);
    //
    //



    getchar();



//    int v[n],i;
//    for(i=0;i<n;i++){
//        printf("\n ingrese el valor de v[%d]: ",i);
//        scanf("%d",&v[i]);
//    }
//
//    for(i=0;i<n;i++){
//        printf("v[%d]: %d",i,v[i]);
//    }
}
