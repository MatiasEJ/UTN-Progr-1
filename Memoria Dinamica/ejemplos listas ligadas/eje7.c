#include <stdio.h>
#include <stdlib.h>

//Se muestra como agregar una secuencia de nodos esta vez usando una función para
// hacer el alta al final. Con otra función se hará el recorrido.
//La inicialización del p de entrada también se hace a través de una función
//Las funciones de alta y de recorrido son recursivas

typedef struct Nodo
{
    int info;
    struct Nodo * sig;
} nodo;

void Inicializar(nodo **pp)
{*pp=NULL;}

void Altafin (nodo **pp, int d)
{
if (*pp==NULL)
    {
 *pp=(nodo *)malloc(sizeof (nodo));
 (*pp)->info=d;
 (*pp)->sig=NULL;
    }

    else
 {Altafin(&(*pp)->sig, d);}

}

void Emitir(nodo *q)
{
 if (q!=NULL)
{Emitir (q->sig);
printf("\n %d \n", q->info);
}
}

int main()
{
nodo *p;
int d;

//Vamos a solicitar datos. El fin será -1.
//Para cada dato se generará un nodo que se agregará al principio
Inicializar(&p);

printf ("\nIngrese un dato, (-1)  para fin \n");
scanf ("%d", &d );

while (d!=-1)
    {Altafin(&p, d);
printf ("\nIngrese un dato\n");
scanf ("%d", &d );}

printf("\n Mostramos información de la lista\n");
    Emitir (p);
    system("pause");
return 0;
}
