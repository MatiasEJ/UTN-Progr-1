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

int buscar (vector w,int tam, int busc)//busqueda secuencial
{ int i=0,ubicacion;
    do
    {
        if (busc==w[i]) {ubicacion=i;}
        else {ubicacion=-1;}
        i++;
    }
    while (i!=tam);
    return ubicacion;
}

int main ()
{
int t,maximo,busc,pos;
vector v;
printf("Indique tamaño\n");
scanf("%d",&t);
cargar (v,t);
emitir (v,t);

printf("Ingrese un elemento y lo buscare en el vector \n");
scanf("%d",&busc);
pos=buscar(v,t,busc);
if(pos==-1) {printf("El dato no está en el vector \n");}
else {printf("El dato esta en la posicion %d",pos);}

return 0;
}
