#include <stdio.h>
#define x 10
typedef int vector [x];
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

void ordburb(vector w,int n)
{
int aux;
for (int i=n-1;i>0;i--)
{
    for(int j=0;j<i;j++)
    {
        if(w[j]>w[j+1])
        {
        aux=w[j];
        w[j]=w[j+1];
        w[j+1]=aux;
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
ordburb(v,t);

emitir (v,t);

return 0;
}
