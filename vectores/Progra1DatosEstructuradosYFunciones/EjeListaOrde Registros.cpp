#include<stdio.h>
#include<stdlib.h>
 
//Este programa utiliza un array de  N registros
//cada registro es una struct alumno
//Mediante un menu se permite
//1: vaciar el array
//2: agregar un muevo registro, si la capacidad lo permite
//3: borrar un registro indicado por su legajo, si este existe
//4: listar el contenido del array
//5: salir del programa
//Ademas, el array de registros sienpre mantendra los registros ordenados por legajo
//Es decir, que organizaremos la informacion como una lista ordenada de registros

//En este caso, al organizar el programa colocaremos antes de main los prototipos de las 
//funciones utilizadas, y luego de main, las definiciones de las funciones usadas
//El programa esta totalmente modularizado


struct alumno
{
 int legajo;
 char curso;
 float nota;       
};

//Emitirmensaje despliega las opciones del menu
void Emitirmensaje();
//Menu llama a Emitirmensaje y luego pide la opcion
int Menu();
//Vaciar deja el array  con todas las posiciones disponibles
void Vaciar(int *q);
//Leer ingresa los datos del curso y nota de un struct desde teclado
void Leercursonota(alumno *);
//Leerleg ingresa un legajo desde teclado
void Leerleg(int *);
//Estaen retorna el subindice en el cual esta el legajo que se pasa, o -1 si no esta
int Estaen(int, alumno [], int );
//Posicion retorna la posicion que le corresponde al nuevo registro en el array ordenado
int Posicion(int , alumno [], int );
//Correr_der desplaza elementos a derecha para hacer lugar para una insercion
void Correr_der (alumno [], int, int);
//Correr_izq desplaza elementos a izquierdz para borrar un registro 'por solapamiento'
void Correr_izq(alumno [], int , int);
//Ubicar coloca el nuevo registro en la posicion indicada
void Ubicar (alumno , alumno [], int );
//Mensaje que indica que el legajo ya estaba
void Error1();
//Mensaje que indica que el array esta lleno
void Error2();
//Mensaje que indica que el array esta vacio
void Error3();
//Mensaje que indica que el legajo no esta en el array
void Error4();
//Agregar determina la posicion de insercion, corre elementos para hacer espacio,
//ubica el registro en posicion y incrementa la ultima posicion
void Agregar(alumno , alumno [], int *);
//Insertar recibe el array de registros, ordena leer el nuevo registro y llama a Agregar
void Insertar(alumno [], int , int *);
//Borrar recibe el array de registros, ordena leer el legajo del registro que debe borrarse,
//ubica la posicion del registro y borra por corrimiento, encimando los registros
//y decrementando la ultima posicion
void Borrar(alumno [],int , int *);
//Emitealu enite el contenido de un registro
void Emitealu (struct alumno );
//Listar lista el contenido del vector de registros
void Listar(alumno [], int);
//Decrementar disminuye en 1 la posicion del ultimo elemento
void Decrementar(int *);
//Incrementar aumenta en 1 la posicion del ultimo elemento
void Incrementar(int *);

int main()
{
const int N=10;
int ult=-1;     //la variable ult almacena la ultima posicion ocupada del array
                // se usara para verificar si hay o no espacio en el array
                
alumno v[N];
int opcion;
opcion = Menu();
while(opcion!=5)
{
    switch(opcion) 
    {
    case 1: Vaciar(&ult); //se vacia el vector poniendo el ultino escrito en -1
            break;
    case 2: Insertar (v,N,&ult);
    //si hay lugar, y se realiza la insercion, hay que incrementar ult, por eso se pasa su direccion            
            break;
    case 3: Borrar(v,N, &ult);           
     //si hay lugar, y se realiza el borrado, hay que decrementar ult, por eso se pasa su direccion            
            break;
    case 4: Listar(v,ult) ;
            break;
     }           
      opcion=Menu(); //volvemos a llamar a Menu()          
}   

system ("pause");
return 0;  
    
    
}

void Emitirmensaje()
{
printf("\nMenu de opciones\n");
printf("\n 1: Borrar el contenido del vector de registros\n");
printf("\n 2: Agregar un registro nuevo al vector de registros\n");     
printf("\n 3: Borrar un elemento del vector de registros\n");     
printf("\n 4: Listar el contenido del vector de registros\n"); 
printf("\n 5: Salir del programa\n");    
printf("\nIngrese opcion\n");    
}

int Menu()
{
 int aux;
 Emitirmensaje();
 scanf("%d", &aux) ;
 while((aux<1) || (aux>5)) 
    {
      printf("ERROR de OPCION, ingrese nuevamente\n") ;
       scanf("%d", &aux) ;        
    } 
 return aux;   
    }

void Leercursonota(alumno *a)
{
  fflush(stdin); 
  printf("\nIngrese el curso\n") ;
  scanf("%c", &(a->curso)) ; 
  fflush(stdin);  
  printf("\nIngrese la nota\n") ;
  scanf("%f", &(a->nota)) ; 
     
}

int Estaen(int l, alumno w[], int ultimo)
{
int i=0,posi=-1;
int encontrado=0;
while ((i <= ultimo)&&(encontrado==0)) 
       if (w[i].legajo==l)
                      {
                          posi=i;
                          encontrado=1;
                      }
           else i++;
return posi;
}

int Posicion(int l, alumno w[], int ultimo)
{
 int j=0;   //variable auxiliar para el recorrido
 int posi, encontrado=0;
 while((j<=ultimo) && (encontrado==0))
 {
  if (l< w[j].legajo)  
                {
                      posi=j;  //esta es la posicion para la insercion
                      encontrado=1;
                } 
      else j++;               
 }  
 if (encontrado ==0) posi=ultimo +1;  //si no se encontro antes la posicion, el nuevo registro
                                      // sigue al ultimo
 return  posi; 
}

void Correr_der (alumno w[], int posi, int ult)
{
 int j = ult;
 for (;j>=posi ;j--)   
     w[j+1]=w[j];      //corre a derecha, comenzando en la ultima posicion cargada, 
                       // para hacer espacio en posi
}

void Ubicar (alumno alu, alumno w[], int posi)
{
 w[posi]=alu;   //carga el registro en la posicion indicada 
}
 
 void Incrementar(int *q)
 {
 (*q)++;
 }
 
 void Error1()
 {
  printf ("\nEse legajo ya estaba almacenado; imposible hacer el alta\n") ;   
 }

 void Error2()
 {
  printf ("\nEl array esta lleno; imposible hacer el alta\n") ;   
 }


void Agregar(alumno alu, alumno w[], int * pult)
{
 int pos = Posicion(alu.legajo, w, *pult) ; //Esta funcion retorna la posicion que
                                            // le corresponde a alu, segun su legajo, en el vector w
 Correr_der(w,pos, *pult);   //Esta funcion 'corre' los elementos del array w, desde la posicion 
 //indicada por pos, hasta la ultima, para hacer lugar al nuevo elemento
 Ubicar(alu, w, pos);
 Incrementar(pult) ; //se incrementa la variable que contiene la   posicion
                      //del ultimo elemento del array, usando un puntero
}

void Insertar(alumno w[], int N, int *p)
{
 struct alumno aux;    //auxiliar para la lectura
 if (*p < N-1)          //chequeo si hay espacio disponible
     {
       Leerleg (&(aux.legajo));     //se carga aux; para eso se pasa su direccion
       if ((Estaen(aux.legajo, w, *p))!= -1)   // si Esta retorna -1 ese legajo no estaba previamente
           Error1();   //La funcion Error1 emite un mensaje indicando que el legajo estaba
        else 
             {
             Leercursonota (&aux);//lee los campos que faltan          
             Agregar(aux, w, p)  ;
             }
          }    
 else Error2() ;     //la funcion Error2 emite un mensaje indicando que el array esta lleno    
    
}

void Emitealu (struct alumno a)
{
  printf("\nLegajo: %d\n", a.legajo);
  printf("Curso: %c\n", a.curso);
  printf("Nota: %f\n", a.nota);
     
}

void Listar(alumno w[], int u)
{
 int i;
 for(i=0;i<=u;i++)     //se emite el contenido del array de registros
     Emitealu (w[i])  ; 
 }

void Vaciar(int *q)
{
*q=-1;     
}

void Error3()
{
printf("\nImposible borrar, el array esta vacio\n");    
}

void Error4()
{
printf("\nImposible borrar, ese legajo no esta en el array\n");      
}

void Leerleg(int *pl)
{
 printf("\nIngrese el legajo\n");
 scanf("%d",pl);    
}

void Correr_izq(alumno w[], int posi, int ult)
{
int i;
for (i=posi;i<=ult-1;i++)
     w[i]=w[i+1];  
}

void Decrementar(int *q)
{
   (*q)--;  
}

void Borrar(alumno v[],int N, int *pult)
{
  if (*pult==-1) Error3();  // array vacio, mensaje de error
    else
    {
     int leg;
     Leerleg(&leg); //se lee un legajo    
     int i=Estaen(leg, v, *pult);  //se ubica la posicion
     if (i!=-1)       //si i ==-1 el legajo no esta
               {
                 Correr_izq (v, i,*pult); //corre, encima y 'borra registros'
                 Decrementar (pult);    //decrementa la ultima posicion
               }  
        else Error4();  //el legajo no esta, mensaje de error      
     }
}
