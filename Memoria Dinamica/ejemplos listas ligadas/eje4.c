#include <stdio.h>
#include <stdlib.h>

//Se muestra como agregar una secuencia de nodos, ahora con alta al final

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
if (p==NULL)
{
p=(nodo *)malloc(sizeof (nodo));
p->info=d;
p->sig=NULL;
}

else

{

 aux=p;
 while(aux->sig!=NULL)
   { aux= aux->sig;}
 aux->sig = (nodo *)malloc(sizeof (nodo));
 aux=aux->sig;
 aux->info=d;
 aux->sig=NULL;

}

printf ("\nIngrese un dato\n");
scanf ("%d", &d );

}
//Vamos a recorrer la lista de dos nodos hasta encontrar el NULL en el �ltimo nodo

printf("\n Mostramos informaci�n de la lista\n");

//Usamos el puntero auxiliar para recorrer la lista. As� no perdemos el principio
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
