#include<stdio.h>
#include<stdlib.h>
 
//En este programa mostraremos como se puede declarar un array de struct alumno, 
//cargarlo, ordenarlo  y emitirlo

struct alumno
{
 int legajo;
 char curso;
 float nota;       
};


//Esta funcion permite emitir el contenido de la variable struct pasada por valor

void emitealu (struct alumno a)
{
  printf("\nLegajo: %d\n", a.legajo);
  printf("Curso: %c\n", a.curso);
  printf("Nota: %f\n", a.nota);
     
}

//esta funcion carga el contenido de una variable struct, recibiendo la direccion 
//de un struct alumno

void cargaalu (struct alumno *p)
{
  printf ("\nIngrese Legajo: ");
  scanf("%d", &(p->legajo)); 
  fflush(stdin);    
  printf("\nIngrese Curso: ");
  scanf("%c", &(p->curso));
  fflush(stdin); 
  printf("\nIngrese Nota: ");  
  scanf("%f", &(p->nota)) ;     
}

//Esta funcion permite cargar un vector de N struct
//el entero pasado es el tamano del array
//para hacer la tarea, llama a la funcion cargaalu

void cargavecal (struct alumno w[], int N)
{
 int i;
 for(i=0;i<N;i++)
    cargaalu(&w[i]);     
 }
 
//y esta funcion emite el contenido del vector ded alumnos

void emitevecal (struct alumno w[], int N)
{
 int i;
 for(i=0;i<N;i++)
    emitealu(w[i]);     
 }


//La funcion siguiente intercambia dos elementos del array de struct
//Se invocara en la funcion qu eordena el vector de struct alumno
void intercambia(struct alumno w[], int d,int f)
{
   struct alumno aux; //auxiliar para el intercambio
   aux= w[d];
   w[d]=w[f];
   w[f]=aux;    
}
 
 
//Esta funcion permite ordenar el array de struct por legajo

void ordenavecal (struct alumno w[], int N)
{
 int i,j;
 for(i=0;i<N-1;i++)    
     for(j=i+1;j<N;j++)
         if (w[i].legajo > w[j].legajo)
             intercambia(w, i, j);    
}
 
//aqui va main

int main()
{
const int M=5;    
struct alumno v[M];
cargavecal(v,M) ;
emitevecal(v,M) ;
//ahora se ordenara al vector para emitirlo nuevamente despues
printf("Este es el vector de struct ordenado por legajo\n");
ordenavecal(v,M) ;
emitevecal(v,M) ; 
system ("pause");
return 0;    
    
}
