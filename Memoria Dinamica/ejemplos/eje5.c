#include <stdio.h>
#include <stdlib.h>

//Se muestra como agregar una secuencia de nodos ahora usando una función para
// hacer el alta al frente. Con otra función se hará el recorrido.
//La inicialización del p de entrada también se hace a través de una función


typedef struct Nodo
{
   int info;
    struct Nodo * sig;
} nodo;

void Inicializar(nodo **pp)
{

    *pp=NULL; //Recibe un puntero a puntero a nodo, es la traduccion de &p en el llamado a la funcion en main
//*pp es p
// todo lo que hago con p lo hago con *pp
}
//EN LAS FUNCIONES LAS VARIABLES QUE SE PASAN SON LOCALES
void Altafr (nodo **pp, int d) //*pp es p
{

nodo *aux;
aux=(nodo *)malloc(sizeof (nodo));
aux->info=d;
aux->sig=*pp; //*pp es el nombre que uso para manipular p
*pp=aux; //*pp es el nombre que uso para manipular p

}

void Emitir(nodo *q)
{
 while (q!=NULL) //Mientras q sea distinto de null mostramos el puntero y lo pasamos al siguiente
{
printf("\n %d \n", q->info);
q=q->sig;
}
}

int main()
{
nodo *p;
int d; //Variable para la lectura del dato que se agrega

//Vamos a solicitar datos. El fin será -1.
//Para cada dato se generará un nodo que se agregará al principio
Inicializar(&p); //&p es igual a *pp

printf ("\nIngrese un dato, -1 para fin \n"); //Leo el dato
scanf ("%d", &d );

while (d!=-1)
{
Altafr(&p, d); //Le paso la direccion de p porque lo que modifico es el contenido de p y el dato que quiero agregar en el nodo nuevo
printf ("\nIngrese un dato\n");
scanf ("%d", &d );
}

printf("\n Mostramos información de la lista\n");

Emitir (p);

system("pause");

return 0;
}
