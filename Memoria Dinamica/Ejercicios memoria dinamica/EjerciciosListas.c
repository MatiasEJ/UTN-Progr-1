/**
a)crear lista

b)Alta al principio

c)Alta al final

d)Borrar el 1° elemento de la lista

e)borrar el úlitmo elemento de la lista
f)buscar un elemento de la lista
g)contar la cantidad de elemntos de la lista
h)destruir lista
2) escribir una funcion que pueda borrar un nodo determinado
a)que borre el 1°
b)que borre el último
c)que borre en cualquier lugar (sin repeticiones)
d)que borre todo los que tengan el valor "x"
3)Ddado el puntero de entrada a la lista escribir una función que devuelva 1 si es capicua o 0 si no lo es
4) dado el puntero de entrada a 2 listas ligadas, escribir una función que devuelva 1 si son idénticos y 0 si no lo son (= contenido y tamaño)
5) dados dos punteros de entrada a dos listas diferentes, obtener una tercer lista con los elementos comunes a ambas
hacer la unión de dos listas
7) Dado un puntero de entrada a una lista con repeticiones, escribir una función que me permita obtener una segunda lista con los siguientes campos:
-int dato
-int rep
-nodo*sig
 dado un puntero de entrada la lista con repeticiones. obtener una segunda lista elminando repeticiones
9)dadas la entrada a dos punteros de entrada a dos listas ordenadas. obtener una tercera lista con los elementos de ambas listas en forma ordenada, sin pasar 2 veces por el mismo lugar
10) considere una lista ligada no ordenada que puede tener repeticiones. escribir una función que reciba el puntero de entrada a la lista y el puntero de entrada a una lista inicialmente vacía y almacene esta nueva lista los datos que están en la primera sin repeticiones. escribir una función que reciba una lista ligada de enteros ordenada de forma creciente y un dato y elimine de la lista ligada a los nodos con ese dato


1) hacer union de listas

2)dado un puntero de entrada a un lista
de con repeticiones . Escribir una funcion
que me permita obtener una segunda lista
con los sig campos
	int DATO
	int repeticion
	nodo *sig

3) dado un puntero de entrada a lista
con repeticion obtener una segund lista eliminando repeticiones

4) dados la entrada de dos punteros a listas ordenadas.
obtener una tercer lista
con los elementos de ambas listas en forma ordenada sin pasar dos veces por le mismo luga.

2 5 7 8  9  15
3 3 9 12 17
SALE:  		2 3 3 5 7 8 9 9 12 15 17


5) Considere Una Lista Ligada no ordenada que puede tener repeticiones. escriba una funcion q reciba
putnero de entrada ala lista y el puntero de netrada a una lista inicialmente vacia y almacene
en esta nueva lista los datos q estan en la primera sin repeticiones.

6) escriba una funcion que reciba una lista ligada de enteros
ordenada de forma creciente y un dato y elimine de la lista ligada todos los nodos cono ese dato;



Se reciben dos listas y se genera una con la interseccion de las mismas.
**/


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

int Menu(int opcion)
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

int d, op;



nodo *p = NULL;
nodo *q = NULL;
nodo *r = NULL;
Inicializar(&p);
Inicializar(&q);
Inicializar(&r);


printf ("\nIngrese un dato para P(-1 para salir): ");
scanf ("%d", &d );
    while (d!=-1)
    {
        Altafin(&p, d);
        printf ("\nIngrese un dato para P(-1 para salir): ");
        scanf ("%d", &d );

    }

    printf ("\nIngrese un dato para Q(-1 para salir): ");
    scanf ("%d", &d );
    while (d!=-1)
    {
        Altafin(&q, d);
        printf ("\nIngrese un dato para Q(-1 para salir): ");
        scanf ("%d", &d );

    }


printf("\n ==========LISTA1============ \n");
Emitir(p);
printf("\n ==========LISTA2============ \n");
Emitir(q);
printf("\n ==========LISTA3============ \n");
//
recurInter(p,q,&r);
Emitir(r);




//system("pause");

return 0;
}


//intersec(p,q,&r)
//recorrer, si esta, alta siguiente

void inter(nodo *pp, nodo *qq, nodo **pr)
{
  while(pp!=NULL){
    if((buscar(qq,pp->info)==1)&&(buscar(*pr,pp->info)==0))
    {
        Altafin(pr,(pp->info));
    }
    pp=pp->sig;
  }
}




void recurInter(nodo *pp, nodo *qq, nodo **pr){
    if(pp!=NULL){
        if((buscar(qq,pp->info)==1)&&(buscar(*pr,pp->info)==0)){
            Altafr(pr,pp->info);

        }
        recurInter(pp->sig, qq, pr);
    }
}

int buscar(nodo *pp,int d ){
    while(pp!=NULL)
    {
        if((pp->info)== d )
        {
            return 1;
        }else{ return 0; }
        pp=pp->sig;
    }
//    if(pp!=NULL){
//        if( (pp->info) == d){
//            return 1;
//        }else{return 0;}
//
//
//        buscar(pp->sig,d);
//    }
}
