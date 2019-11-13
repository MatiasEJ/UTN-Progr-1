#include <stdio.h>
#include <stdlib.h>

//Se muestra como agregar una secuencia de nodos, siempre con alta al frente
//Cada uno nuevo se pone adelante de los otros

typedef struct Nodo
{
   int info;
    struct Nodo * sig;
} nodo;

int main()
{
nodo *p, *aux;
int d;
p=NULL;

//Vamos a solicitar datos. El fin ser� -1.
//Para cada dato se generar� un nodo que se agregar� al principio


printf ("\nIngrese un dato, -1 para fin \n");
scanf ("%d", &d );

while (d!=-1)
{

aux=(nodo *)malloc( sizeof (nodo));

aux->info=d;

aux->sig=p;

printf ("\nIngrese un dato\n");
scanf ("%d", &d );
p=aux;

}
//Vamos a recorrer la lista de dos nodos hasta encontrar el NULL en el �ltimo nodo

printf("\n Mostramos informaci�n de la lista\n");

//Usamos el puntero auxiliar par arecorrer la lista. As� no perdemos el principio
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
