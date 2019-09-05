#include<stdio.h>
#include<stdlib.h>

//En este programa veremos como se realiza el manejo de strings (cadenas de caracteres) en C
//Un string es una sucesion de caracteres que puede utilizarse para guardar una palabra
//En C un string se maneja con un vector de caracteres que tiene un caracter al final
//indicando que ahi termina la cadena de caracteres
//ese terminador se indica  con \0, y corresponde al ASCII 0

int main()
{
char palabra[10]; //aca vamos a almacenar la palabra HOLA   
//tenemos espacio de sobra
//si queremos asignar letra a letra los valores, podemos hacer
palabra[0]='H';
palabra[1]='O';
palabra[2]='L';
palabra[3]= 'A';
//ahora ponemos el terminador (el caracter \0, como dijimos antes)   
palabra[4]= '\0' ;
//los lugares no usados no interesan, solo debe quedar el terminador
// a continuacion de la ultima letra de la palabra  
    
//para mostrar la palabra, se puede usar un ciclo, como a continuacion
int i=0;
printf("\n emision de la palabra caracter a caracter con el especificador  c \n");

while(palabra[i]!='\0')
    {
    printf("%c", palabra[i]);
    i++;
    
    }
    
//o bien podemos usar el especificador de formato %s, qu ese usa para entrada y salida de 
//cadenas de caracteres

printf("\n emision de la palabra usando el especificador  s \n");
printf("%s", palabra);
//observar que , al indicar palabra, estamos dando la direccion d ecomienzo de la misma
//como sucede con los nombres de los vectores en general 

//Se puede ingresar una palabra caracter a caracter, como se indica a continuacion
//en este caso, el usuario deb epulsar enter cuando haya terminado de ingresar los caracteres
printf("\n ingreso de la palabra letra  a letra\n");

for(i=0;i<10; i++)
  
  {
  printf("\n Ingrese letra \n");
  fflush(stdin);
  scanf("%c", &palabra[i]);
}

//mostramos la palabra
printf("\n emision de la palabra ingresada usando el especificador s\n");
printf("%s", palabra);

//Tambien se puede ingresar la palabra de una sola vez , y no letra  a letra, con un scanf
//y el especificador %s
printf("\n ingreso de la palabra con scanf y %\n");
printf("\n ingrese la palabra y pulse enter al finalizar\n");

scanf("%s", palabra);
//Observar que  palabra en el scanf no lleva & , esto es porque
//por ser palabra un VECTOR, palabra es a la DIRECCION de comienzo de la misma
//palabra es un PUNTERO al comienzo de la palabra
//entonces scanf ya tiene la direccion en donde debe almacenar la secuencia de caracteres
//cuando scanf detecta el caracter correspondiente al enter, almacena en esa posicion
//y en las siguientes (si sobra espacio)un \0             
printf("\n emision de la palabra ingresada usando el especificador s\n");
printf("%s \n ", palabra);


system ("pause");
return 0;   
    
}
