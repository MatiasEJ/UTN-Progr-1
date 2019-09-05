//como un vector ya es un puntero puedo meterlo dentro de una funcion sin problema
#include <stdio.h>
#define n 10 //es una declaracion de constante en vez de const int
typedef int vector [n]; //las funciones dicen que van a recibir un vector, por eso debo definirlos antes
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

int obtenermax (vector w,int tam)
{
    int i, max=0;
   for(int i=0;i<tam;i++)
    {
    if (max<w[i])
     {
      max=w[i];
     }

     }
return max;
}

void Emitirposmax (vector w,int tam,int max)
{

for(int i=0;i<tam;i++)
    {
if (max==w[i])
{
printf("Esta en la posicion %d\n",i);

}

}

}

int main ()
{
int t,maximo;
vector v;
printf("Indique tamaño\n");
scanf("%d",&t);
cargar (v,t);
emitir (v,t);
maximo=obtenermax(v,t);
printf("El maximo fue %d\n",maximo);
printf("Posicion del maximo\n");
Emitirposmax(v,t,maximo);

return 0;
}
