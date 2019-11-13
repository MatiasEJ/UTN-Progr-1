#include <stdio.h>
#include <stdlib.h>

//Programa para completar con un menu  para el alta al principio,
// alta al final, busqueda, emision y borrado, con funciones recursivas


typedef struct Nodo
{
   int info;
   struct Nodo * sig;
} nodo;

void Inicializar(nodo **pp)
{*pp=NULL;}

void Altafr (nodo **pp, int d)
{
nodo *aux;
aux=(nodo *)malloc(sizeof (nodo));
aux->info=d;
aux->sig=*pp;
*pp=aux;
}

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


void Borrar(nodo **pp, int d) //esta función borra todas los nodos de la lista que contengan d
{int p;
  if ((*pp)!=NULL)   //si el puntero no es nulo
  {
     if ((*pp)->info==d) //preguntamos si apunta a un nodo que contenga lo que queremos borrar
      {
         nodo *aux=*pp; //si es así, apuntamos a ese nodo con el aux
         *pp=(*pp)->sig;    //avanzamos p
         free(aux);    //eliminamos el nodo con el dato que queríamos sacar de la lista
       } //SI USAMOS UN ELSE borra el primer
     Borrar(&(*pp)->sig, d) ; //invocamos con el siguiente,d puede estar en uno o varios nodos

     }
}

void borrarTodo(nodo **pp, int d){
    int p;
    if ((*pp)!=NULL)   //si el puntero no es nulo
    {
        if((*pp)->info == d){
            nodo *aux = *pp;
            *pp = (*pp)->sig;
            free(aux);
            borrarTodo(pp,d);
        }
        borrarTodo(&(*pp)->sig,d);
    }
}

void borrarLista(nodo **pp){
    {int p;
  if ((*pp)!=NULL)   //si el puntero no es nulo
  {

         nodo *aux=*pp; //si es así, apuntamos a ese nodo con el aux
         *pp=(*pp)->sig;    //avanzamos p
         free(aux);    //eliminamos el nodo con el dato que queríamos sacar de la lista
      //SI USAMOS UN ELSE borra el primer
     borrarLista(&(*pp)->sig) ; //invocamos con el siguiente,d puede estar en uno o varios nodos

     }
}
}




//Escribir la función Esta, que recibe el puntero de entrada a la lista y un dato y
//retorna 1 si el dato esta en la lista o 0 si no está


//Escribir la función Menu, que muestra las opciones y almacena en la dirección
//que recibe la elección del usuario.
//Las opciones son:
      //1 Alta al frente
      //2 Alta al final
      //3 Busqueda de un dato
      //4 Borrado de los nodos que contengan el dato pasado por argumento
      //5 Emisión del contenido de la lista
      //6 Salir

void Menu(int opcion)
{

    printf("    (1) Alta al frente\n");
    printf("    (2) Alta al final\n");
    printf("    (3) Borrar toda la lista\n");
    printf("    (4) Borrar un dato\n");

    printf("    (5) Emitir\n");
    printf("\n");
    printf("Elija una opcion: ");
    scanf("%d",opcion);
}

void Emitir(nodo *q)
{
 while (q!=NULL)
{
printf("[%d] ", q->info);
q=q->sig;
}
}

int main()
{
nodo *p;
int d, op, r;

//Vamos a solicitar datos. El fin será -1.
//Para cada dato se generará un nodo que se agregará al principio
Inicializar(&p);

// COMPLETAR main

Menu(&op);
while (op!=0)
{
switch(op)
 {
 case 1:  printf ("\nIngrese un dato: ");
          scanf ("%d", &d );
          while (d!=-1){
            Altafr(&p, d);
            printf ("\nIngrese un dato (-1 para salir): ");
            scanf ("%d", &d );
            fflush(stdin);
          }
          break;
 case 2:  printf ("\nIngrese un dato: ");
          scanf ("%d", &d );
          while (d!=-1){
            Altafin(&p, d);
            printf ("\nIngrese un dato (-1 para salir): ");
            scanf ("%d", &d );
            fflush(stdin);
          }
          break;
case 3:

        borrarLista(&p);
         break;
 case 4: printf ("\nIngrese un dato a eliminar de la lista: ");
         scanf ("%d", &d );
         borrarTodo(&p,d); //Completar
         break;
 case 5:    system("cls");
            printf("\n ====================== \n");
            Emitir(p);
            printf("\n");
         break;
 } //end switch
Menu(&op);
}//end while

system("pause");

return 0;
}
