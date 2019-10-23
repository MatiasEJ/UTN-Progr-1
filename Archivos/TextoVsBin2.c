/*Archivo 2.cpp Programa que introduce al uso de archivos. Permite grabar una cadena de
caracteres en un archivo y despues  leerlo. Emplea grabación caracter a caracter,
mediante un bucle, con las fucniones putc() o fputc() y getc() y fgetc(). Ver archivo1.cpp
para grabación de un solo caracter.**/
#include <stdio.h>
#include <conio.h>

int main()
{
   FILE *puntero_archivo;  /* declara un puntero al archivo */
   char cadena[200] , caracter_leido;
   static int i;
   printf("Intro cadena a guardar en archivo: ");
   gets(cadena);

  /* El archivo es creado  */
  if((puntero_archivo= fopen("arch.txt", "w"))==NULL)
  puts("Error al abrir el archivo..."); /* crea el archivo llamado arch.txt
      en A: y lo asigna al puntero de archivo llamado puntero_archivo   */
else
{
  //Ahora escribimos la cadena caracter a caracter:
  while(cadena[i])
    {
       putc(cadena[i],puntero_archivo);  /* La funcion putc() escribe en el
     	archivo apuntado por puntero_archivo el caracter enviado en lavariable
        caracter_a_escribir. Tambien vale fputc()*/
       i++;
    }
  fclose(puntero_archivo); /* Cierra el archivo */

  /* Abrimos el archivo. Modo "r" para lectura  */

  puntero_archivo = fopen("arch.txt", "r");
  printf("\n El contenido del fichero es:\n");
  i=0;
  while(cadena[i])
    {
      caracter_leido =   getc(puntero_archivo); /* La funcion getc() lee desde  el
       archivo apuntado por el puntero_archivo y elcaracter leido lo asigna  a la
        variable caracter_leido. También vale fgetc(); */
      printf("%c", caracter_leido);
      i++;
    }

  fclose(puntero_archivo);   /* Cierra el archivo */
  getch();   //detiene pantalla
  }
  return 0;
}
