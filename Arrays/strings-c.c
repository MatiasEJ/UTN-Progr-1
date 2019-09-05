#include <stdio.h>
#include <string.h>
#define n 5
#define m 20
typedef char string[n];
typedef string vecpal[m];


void carga (vecpal,int);
void imprimir (vecpal,int);
void ordenar (vecpal,int);

void main(){
    vecpal v;
    int t;
    //cargar con cantidades de palabras que quiere el usuario;
    carga(v,t);
    ordenar(v,t);
    imprimir(v,t);

//    string palabra,pal1,pal2;
//
//    scanf("%s",palabra);
//    printf("%s",palabra);
//    //Alternativa
//    gets(palabra);
//    puts(palabra);
//    //Copia de strings
//
//    strcpy(pal1, pal2);
//    //comparar strings
//    strcmp(pal1,pal2)
//    /*convertir a minisculas antes!!!*/
//
//    //si 0 = iguales
//    //si 1 pal1>pal2
//    //si -1 pal1<pal2

    /* TAREA:
    Cargar vectores de palabras ordenar alfabeticamente
    */

}

void carga(vecpal w, int tam){
    int i;
    for (i=0;i<tam;i++){
        printf("\n Ingrese palabra para la posicion %d: ", i);
        scanf("%s",w[i]);
    }
}

void ordenar(vecpal w, int tam){
    int i;
    string aux;
    for (i=0;i<tam;i++){
         for(int j = i+1;j<tam;j++){
                if(strcmp(w[i],w[j])>0){
                    strcpy(aux,w[i]);
                    strcpy(w[i],w[j]);
                    strcpy(w[j],aux);
                }

        }

    }
}

void imprimir(vecpal w, int tam){
    int i;
    for (i=0;i<tam;i++){
        printf("v[%d]=%s", i,w[i]);

    }
}
