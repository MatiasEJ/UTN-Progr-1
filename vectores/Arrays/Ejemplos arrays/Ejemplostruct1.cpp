#include<stdio.h>
#include<stdlib.h>
 
//En este programa se muestra el uso de los struct
//un struct es una estructura que puede almacenar datos de distinto tipo, como un array heterogeneo
//en este ejemplo, una struct que contiene un legajo, un curso (char) y una nota
//cada 'parte' del struct se llama campo y tiene un identificador
//a diferencia de un array, en los que nos referiamos a una componente por su posicion
//aqui cada campo tiene un identificador
//tener en cuenta tambien que lo que estamos declarando es un tipo de dato, 
//no se genera con estas lineas espacio de memoria para contener variables
//sino que se esta dando la descripcion del tipo

struct alumno
{
 int legajo;
 char curso;
 float nota;       
};
 int main()
 {
  alumno a, b; //se declaran dos variables tipo  struct alumno
  //ahora se carga la primera
  //si la variable struct se llama a, entonces
  //a.legajo es el campo legajo de a
  //a.curso es el campo curso de a 
  //a.nota es el campo nota de a
  //analogamente para b  
  a.legajo=100;
  a.curso='c' ;
  //la nota vamos a ingresarla desde teclado
  printf("ingrese la nota ");
  scanf("%f", &a.nota);
  //ahora cargamos b
  b.legajo=200;
  //vamos a asignarle el mismo curso que tiene a
  b.curso=a.curso;
  //vamos a asigmarle menos nota que a
  b.nota= a.nota -1;
  //ahora vamos a emitir el contenido de cada variable struct alumno
  printf("La variable a contiene\n");
  printf("a.legajo = %d\n", a.legajo);
  printf("a.curso = %c\n", a.curso);
  printf("a.nota = %f\n", a.nota);
  printf("La variable b contiene\n");
  printf("b.legajo = %d\n", b.legajo);
  printf("b.curso = %c\n", b.curso);
  printf("b.nota = %f\n", b.nota);
  
  //vamos a declarar un puntero a la struct alumno
  
  alumno *p;
   //vamos a usar para manipular las variables a;umno a y b
   //el operador -> permite seleccionar un campo de una variable struct 
   //apuntada por un puntero a ese tipo de struct
   //es decir
   
  p=&a;     //p apunta a a
  
  //emision del contenido de a
  printf("\nEl legajo de la struct a es %d\n", p->legajo);
  printf("\nEl curso de la struct a es %d\n", p->curso);
  printf("\nLa nota de la struct a es %d\n", p->nota);
  
  //luego se puede hacer
  
  p=&b;
  
 //y emitir el contenido del otro struct
 printf("\nEmision de b usando el operador flecha -> \n");
 
  printf("\nEl legajo de la struct b es %d\n", p->legajo);
  printf("\nEl curso de la struct b es %d\n", p->curso);
  printf("\nLa nota de la struct b es %f\n", p->nota);
  
  //tambien se puede usar el operador indireccion * para manipular el contenido del struct
  // p->legajo tambien es *(p).legajo
  
  //usando esa notacion, es
  
  printf("\nEmision de b usando el operador indireccion * \n");
  
  printf("\nEl legajo de la struct b es %d\n", (*p).legajo);
  printf("\nEl curso de la struct b es %d\n", (*p).curso);
  printf("\nLa nota de la struct b es %f\n", (*p).nota);  
  
  
  system("pause");
  return 0;     
     
     }
