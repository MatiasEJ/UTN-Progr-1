#include <stdio.h>
#include <stdlib.h>
#define x 10
typedef int vector[x];

void cargar (vector w, int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("Ingrese valor de la posicion %d\n",i);
        scanf("%d",&w[i]);
    }
}

void emitir (vector w, int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("V[%d]: %d \n",i,w[i]);
    }
}

void ordsel(vector w,int n)
{
int aux;
for (int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(w[i]>w[j])
        {
        aux=w[i];
        w[i]=w[j];
        w[j]=aux;
        }
    }
}
}
int main()
{
int t;
vector v;
printf("Indique tamaño\n");
scanf("%d",&t);
cargar (v,t);
emitir (v,t);
ordsel(v,t);

emitir (v,t);

return 0;
}
