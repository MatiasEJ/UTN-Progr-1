#include <stdio.h>

#define n 10
#define m 15
typedef float matriz [n][m];

void cargar(matriz ma, int nf, int nc){
int i,j;
    for(i=0;i<nf;i++){
        for(j=0;j<nc;j++){
            printf("\ningrrese el svalor de fila %d y columna %d: ", i,j);
            scanf("%f", &ma[i][j]);
        }
    }
}

void emitir(matriz ma, int nf, int nc){
int i,j;
    for(i=0;i<nf;i++){
        for(j=0;j<nc;j++){
            printf("%.0f ", ma[i][j]);
        }
        printf("\n");
    }
}

void maximo

int main (){
    matriz mat;
    float max;
    int f, c;

    printf("\nindique cant de filas: ");
    scanf("%d",&f);

    printf("\nindique cant de col: ");
    scanf("%d",&c);

    cargar(mat, f, c);
    emitir(mat, f, c);
    // SACAR EL MAXIMO
    max = Maximo(ma, f,c);
    printf("el maximo es: %d");


}
