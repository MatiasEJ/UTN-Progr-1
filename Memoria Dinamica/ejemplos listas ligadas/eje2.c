#include <stdio.h>
#include <stdlib.h>

//Se muestra como agregar un nodo delante de otro


typedef struct Nodo
{
   int info;
    struct Nodo * sig;
} nodo;

int main()
{
nodo *p;
int d;
p=NULL;

p=(nodo *)malloc(sizeof (nodo));

printf ("\nIngrese un dato\n");
scanf ("%d", &d );

p->info=d;
p->sig=NULL;

//Ahora agregamos otro nodo delante. Usamos un puntero auxiliar

nodo *aux;
aux=(nodo *)malloc(sizeof (nodo));
printf ("\nIngrese un dato\n");
scanf ("%d", &d );
aux->info=d;
aux->sig=p;
p=aux;

//Vamos a recorrer la lista de dos nodos hasta encontrar el NULL en el último nodo

printf("\n Mostramos información de la lista\n");

//Usamos el puntero auxiliar par arecorrer la lista. Así no perdemos el principio
//Si modoficamos el contenido de p podemos perder el principio de la lista

aux=p;
while (aux!=NULL)

{

printf("\n %d \n", aux->info);
aux=aux->sig;

}

system("pause");

return 0;
}
