#include <stdio.h>
#include <stdlib.h>

//Se muestra la creaci�n y emisi�n de un nodo


typedef struct Nodo
{
   int info;
    struct Nodo * sig;

} nodo;

int main()
{
nodo *p;
int d;
p=NULL; //El puntero siempre se declara

p=(nodo *)malloc(sizeof (nodo));

printf ("\nIngrese un dato\n");
scanf ("%d", &d ); //Cargo el nodo y lo guardo

p->info=d;
p->sig=NULL; //Declaro el puntero siguiente en NULL

printf("\n Mostramos informaci�n del nodo\n");
printf("\n %d \n", p->info);

system("pause");

return 0;
    }
//EL PROGRAMA CARGA UN NODO Y MUESTRA EL CONTENIDO
