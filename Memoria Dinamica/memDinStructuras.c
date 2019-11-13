#include <stdio.h>
#include <stdlib.h>
/**
    ESTRUCTURAS DE LISTAS LIGADAS
    guardar en una lista ligada los datos de socios de un club cada nodo almacena:
        numSoc
        edad
        *sig
    a) Una funciona para hacer el alta al ppio
    b) una funcion que recorra la lista (solo los mayores de edad)
    incorporar estas funciones en un programa que solicite datos agregue a la lista y luego emita mayores


**/


typedef struct Nodo{
    int numSoc;
    int edad
    struct nodo *sig;
}nodo;


int main (){
    int opt;
    nodo *p;
    int d; //Variable para la lectura del dato que se agrega

    //Vamos a solicitar datos. El fin será -1.
    //Para cada dato se generará un nodo que se agregará al principio
    Inicializar(&p); //&p es igual a *pp

    printf ("\nIngrese un dato, -1 para fin \n"); //Leo el dato
    scanf ("%d", &d );


    menu();
    printf("Seleccionar accion: ");
    scanf("%d",&opt);
    switch (opt){
        case 1;
            Altafr(&p,);
        break;
        case 2;
            Emitir()
        break;
        case 3;

        break;
    }

}

void menu(){
    printf("1.- Agregar al frente");
    printf("2.- Recorrer lista");
    printf("3.- Eliminar");
}

void Inicializar(nodo **pp)
{

    *pp=NULL; //Recibe un puntero a puntero a nodo, es la traduccion de &p en el llamado a la funcion en main
//*pp es p
// todo lo que hago con p lo hago con *pp
}
//EN LAS FUNCIONES LAS VARIABLES QUE SE PASAN SON LOCALES
void Altafr (nodo **pp, int d) //*pp es p{
    nodo *aux;
    aux=(nodo *)malloc(sizeof (nodo));
    aux->info=d;
    aux->sig=*pp; //*pp es el nombre que uso para manipular p
    *pp=aux; //*pp es el nombre que uso para manipular p
}

void Emitir(nodo *q){
    while (q!=NULL){ //Mientras q sea distinto de null mostramos el puntero y lo pasamos al siguiente
        printf("\n %d \n", q->info);
        q=q->sig;
    }
}

void datos(int numSoc, int edad){
    printf ("\nIngrese numSoc: \n");
    scanf ("%d", numSoc);
    printf ("\nIngrese edad: \n");
    scanf ("%d", &p.edad);
}
