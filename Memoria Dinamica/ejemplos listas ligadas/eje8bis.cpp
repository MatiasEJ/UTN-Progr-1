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
{
  if ((*pp)!=NULL)   //si el puntero no es nulo
  {
     if ((*pp)->info==d) //preguntamos si apunta a un nodo que contenga lo que queremos borrar
      {
         nodo *aux=*pp; //si es así, apuntamos a ese nodo con el aux
         *pp=(*pp)->sig;    //avanzamos p
         free(aux);    //eliminamos el nodo con el dato que queríamos sacar de la lista
         Borrar(pp, d) ;
       }
     else Borrar(&(*pp)->sig, d) ;

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

void esta( *q ){
if((*pp)->info==0){
        return 1;
else{
    return 0;
}
}}
void Menu(int * opcion)
{
    printf("Elija una opcion: \n\n");
    printf("    (1) Alta al frente\n");
    printf("    (2) Alta al final\n");
    printf("    (3) Buscar dato\n");
    printf("    (4) Borrar dato\n");
    printf("    (5) Emitir al derecho\n");
    printf("    (6) Emitir al revés\n");
    printf("    (7) Eliminar todos los nodos\n");
    printf("\n");
    scanf("%d",opcion);
}

void Emitir(nodo *q)
{
    while(q!=NULL)
    {
        printf("\n %d \n\n",q->info);
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



Menu(&op);
while (op!=0)
{
switch(op)
 {
 case 1: printf ("\nIngrese un dato\n");
          scanf ("%d", &d );
          Altafr(&p, d);
          break;
 case 2:   printf ("\nIngrese un dato\n");
          scanf ("%d", &d );
          Altafin(&p, d);
          break;
 case 3: printf ("\nIngrese un dato a buscar en la lista\n");
         scanf ("%d", &d );
         r=Esta (p, d); //escribir esta funcion. Debe retornar 1 si d esta en la lista,
         // y 0 si no esta. Escribirla en versión iterativa y recursiva
         if (r==0)
              {printf ("......");}
         else
               {Completar}
         break;
 case 4: printf ("\nIngrese un dato a eliminar de la lista\n");
         scanf ("%d", &d );
         Borrar (.....); //Completar
         break;*/
 case 5: Emitir(p);
         break;
 //case 6: Alvesre(p);
         break;
 //case 7: EliminarLista(&p);
         break;
 } //end switch
Menu(&op);
}//end while

system("pause");

return 0;
}
