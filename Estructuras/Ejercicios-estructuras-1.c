#include <stdio.h>
#define N 3

typedef struct {
    int legajo;
    float monto;

}cliente;
typedef cliente cartera[N];

void cargar(cartera,int);
void mostrar(cartera,int);

int main(){
    cartera miscli;
    int tope;
    //leer y validar tope
    cargar(miscli, tope);
    mostrar(miscli,tope);

}

void cargar(cartera c,int t){
    int i;

    for(i=0;i<t;i++){
        printf("ingrese legajo de cliente %d: ",i);
        scanf("%d", &(c[i].legajo));
        printf("ingrese Monto de cliente %d: ",i);
        scanf("%f", &(c[i].monto));
    }
    printf("\n");
}

void mostrar(cartera c,int t){
    int i;

    for(i=0;i<t;i++){
        printf("\nNumero de legajo de cliente %d: %d ",i,(c[i].legajo));
        printf("\nMonto de cliente %d: %.2f",i,(c[i].monto));

    }
    printf("\n");
}
