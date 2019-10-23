/*fwritecad3.cpp*:Similar a fwritecad2.cpp Muestra el uso de fwrite() y fread().
Guarda cadenas de caracteres en un archivo y luego las lee. Para ello rellena un
array. Para grabar se pulsa el intro. Para finalizar se pulsa Intro + Control-F + Intro.
Antes de finalizar imprime por pantalla el contenido del fichero. Se emplea el
modo "a" de apertura. Cada vez que se graba se añade un salto de linea.
Observa los cambios que aparecen en la interpretacion de este caracter ('\n') según
se emplee el modo apertura texto (t) o binario (b)*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
int main(){
  FILE *pf;
  char cadena[50], leido[50];
  //  int datos = sizeof(array)/sizeof(int); //Tamaño del array/tamaño del dato int
  int i=0;

  /* Abrimos el fichero para añadir al final. Si no existe le crea*/
  if ((pf = fopen("a:\\cad.txt", "a")) == NULL)
   {
    perror("Imposible abrir fichero");
    getch();
    exit(0);
   }
   puts("Intgro cadena a grabar.Para finalizar pulsar Intro + Control-F + Intro:\n");
   gets(cadena);
   while(cadena[0] != 0x6)//Si el primer elemento de la cadena no es ^F
    {
      if (ferror(pf))
       {
         perror("Error al escribir");
        exit(1);//hubo algun tipo de problema
       }
      fwrite(cadena,sizeof(cadena), 1, pf);
      fputc('\n', pf);
      for(; i<50; i++)  //Limpiamos la cadena
       cadena[i] = 0;
      gets(cadena);
    }
  fclose(pf);

  /* Escribir el contenido del fichero */
    if ((pf = fopen("a:\\cad.txt", "r")) == NULL)
     {
      perror("Imposible abrir fichero");
      exit(0);
     }
   puts("Leemos el archivo:\n");

     fread(leido, sizeof(cadena), 1, pf);  //Lectura anticipada
     fgetc(pf); //Lee el '\n' introducido con fputc(). No hace nada con el
                //Comprueba la diferencia en la salida eliminando esta linea.
    while(!feof(pf))
     {

       puts(leido);
       fread(leido, sizeof(cadena), 1, pf); //lo que lee lo guarda en el array
       fgetc(pf);//Lee el '\n' introducido con fputc() al final de cada linea
     }
  fclose(pf);
  getch();
}
