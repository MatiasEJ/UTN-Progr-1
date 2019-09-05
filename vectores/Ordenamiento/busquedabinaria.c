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

int BBin (vector w, int pr, int ul, int buscado)
{
    int me,posicion=-1;
    while ((pr<=ul) && (posicion==-1))
    {
        me=(pr+ul)/2;
        if (w[me]==buscado)
        {
            posicion=me;
        }
        else if (buscado>w[me])
                {
                pr=me+1;
                }
                else
                {
                    ul=me-1;
                }
    }
return posicion;

}

int main()
{
int t;
vector v;
printf("Indique tamaño\n");
scanf("%d",&t);
cargar (v,t);
emitir (v,t);
printf("\n");
ordburb(v,t);

emitir (v,t);

int pos=BBin(v,0,t-1,42);

printf("%d",pos);

return 0;
}
