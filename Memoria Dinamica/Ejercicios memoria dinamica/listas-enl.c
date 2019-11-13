
#include <stdio.h>
#include <stdlib.h>
/**
//Se muestra como agregar una secuencia de nodos esta vez usando una función para
// hacer el alta al final. Con otra función se hará el recorrido.
//La inicialización del p de entrada también se hace a través de una función
**/

typedef struct Nodo
{
   int info;
    struct Nodo * sig;
} nodo;


/**PROTOTIPOS**/
void emitir1(nodo *);
void emitir2(nodo *);
void Inicializar(nodo **);
void Altafin (nodo **, int);
void Emitir(nodo *);
int contNodos(nodo *);
/**PROTOTIPOS**/

int main()
{
nodo *p;
int d;

//Vamos a solicitar datos. El fin será -1.
//Para cada dato se generará un nodo que se agregará al principio
Inicializar(&p);

printf ("\nIngrese un dato (-1 para salir): ");
scanf ("%d", &d );
fflush(stdin);
while (d!=-1)
{
altaRecursi(&p, d);
printf ("\nIngrese un dato (-1 para salir): ");
scanf ("%d", &d );
fflush(stdin);
}

printf("\n Mostramos información de la lista\n");
Emitir (p);
printf("\n");
printf("emitir1");
emitir1(p);
printf("\n");
printf("emitir2");
emitir2(p);
printf("\n");

printf("cant nodos: %d",contNodos(p));
printf("\n");
system("pause");

return 0;
}


void Inicializar(nodo **pp)
{*pp=NULL;}

void Altafin (nodo **pp, int d)
{
nodo *aux;
if (*pp==NULL)  //pp es la direccion de p
 {
 *pp=(nodo *)malloc(sizeof (nodo));
 (*pp)->info=d;
 (*pp)->sig=NULL;
 }
else
 {
 aux=*pp;
 while (aux->sig!=NULL)
  {
   aux=aux->sig;
  }
 aux->sig= (nodo *)malloc(sizeof (nodo));
 aux=aux->sig;
 aux->info=d;
 aux->sig=NULL;
 }
}

void altaRecursi(nodo **pp,int d)
{
nodo *aux;
int cont = 0;
if (*pp==NULL)  //pp es la direccion de p
 {
 *pp=(nodo *)malloc(sizeof (nodo));
 (*pp)->info=d;
 (*pp)->sig=NULL;
 }
else
 {

    Altafin(&((*pp)->sig),d);
    contNodos(*pp);
 }
}


void Emitir(nodo *q)
{
 while (q!=NULL)
{
printf("\n %d \n", q->info);
q=q->sig;
}
}


void emitir1(nodo *p){
    if(p!=NULL){
        printf("\n%d ",p->info);
        emitir1(p->sig);
    }
}

void emitir2(nodo *p){
    if(p!=NULL){
    emitir2(p->sig);
    printf("\n%d ",p->info);
    }
}

int contNodos(nodo *p){
    int cont = 0;
    if(p!=NULL){
        if(p->info){
            cont++;
        }

        contNodos(p->sig);

    }
    return cont;
}
