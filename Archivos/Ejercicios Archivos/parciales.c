#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTVENTAS 3
#define CANTVENDEDORES 4

typedef char palabra[20];

typedef int vec[CANTVENTAS];

struct vendedores{
    int legajo;
    palabra nombre;
    int zona;
    vec ventas;
};
typedef struct vendedores vendedor;
typedef struct ventasCero vc;




int main()
{
    int valorProm = 100;
    vec ventCe[CANTVENDEDORES];
    int *pVc;
    pVc = ventCe;
   vendedor ven[CANTVENDEDORES];
   carga(ven);
   int cant = promMayorX(ven,CANTVENDEDORES,valorProm);
   printf("Cantidad que superan 10: %d",cant);

   imprime(ven);
   ordenar(ven,2);
   imprime(ven,2);
   ventasCero(ven,4,pVc);

}
carga(vendedor pun[]){
    int i,j;
    for(i=0;i<CANTVENDEDORES;i++){

    printf("\n  Legajo: ");
    scanf("%d",&(pun[i].legajo));
    printf("  Nombre: ");
    scanf("%s",pun[i].nombre);
    printf("  Zona: ");
    scanf("%d",&(pun[i].zona));
        for(j=0;j<CANTVENTAS;j++){
            printf("  venta[%d]: ",j);
            scanf("%d",&(pun[i].ventas[j]));
        }
    }
}

void imprime(vendedor v[]){
    int i,j;
    printf("\n--------------------------------------\n");
    printf("\n\tLegajo\tNombre\tzona\tventas\n");

    for(i=0;i<CANTVENDEDORES;i++){
        printf("\n\t%d\t%s\t%d\t",v[i].legajo, v[i].nombre,v[i].zona);
        for(j=0;j<CANTVENTAS;j++){
            printf("|venta[%d]: ",v[i].ventas[j]);

            }
    }
    printf("\n--------------------------------------\n");
    printf("\n\n");
}

//Se tiene un array de N struct vendedor
//Funcion que reciba el vector de registros, el valor de N y un real --> cant vend que superen x
int promMayorX(vendedor ven[],int n, int x){
    int i,j, totalSum = 0,vendMax=0;
    float prom;
    for(i=0;i<n;i++){
        totalSum = 0;
        for(j=0;j<CANTVENTAS;j++){
            totalSum= totalSum + ven[i].ventas[j];
            prom=totalSum/n;

        }
        if(prom > x){
            vendMax = vendMax+1;
        }


    }
    return vendMax;
}

//
void ventasCero(vendedor v[],int n,int *pv)
{
    int i,j, totalSum = 0,vendMax=0,cont=0,pos;
    float prom;
    for(i=0;i<n;i++){
        totalSum = 0;
        for(j=0;j<CANTVENTAS;j++){
            totalSum= totalSum + v[i].ventas[j];
            prom=totalSum/n;

        }
        pos=i;
        printf("\n --> total ventas %d = %d, pos: %d",i,totalSum,pos);
        if(totalSum == 0){
            pv[cont]= i;
            cont++;
        }

    }

    for(i=0;i<cont;i++){
        printf("\n");
        printf("| %d",pv[i]);
    }

}


//ordenar por zona y por legajo
void ordenar(vendedor v[],int n){
    vendedor aux,*p,aux2;
    p=v;

    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j].zona>p[j+1].zona){
                aux= *(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)= aux;
                if(p[j].legajo>p[j+1].legajo){
                aux= *(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)= aux;
            }
            }



        }
    }

}
