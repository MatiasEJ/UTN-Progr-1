/*Archivo32.cpp Programa que introduce al uso de archivos. Permite grabar una cadena de
caracteres en un archivo y despues  leerlo. Emplea las fucnones  fputs() y fgets().
Emplea dos arrays de caracteres*/
#include <stdio.h>
#include <conio.h>
#include<string.h>

int main()
 {
   FILE *puntero_archivo;  /* declara un puntero al archivo */
   char cadena_a_escribir[200] , cadena_leida[200];
   printf("Intro cadena a guardar en archivo: ");
   gets(cadena_a_escribir);

  /* El archivo es creado  */
  if((puntero_archivo= fopen("arch3.txt","w"))==NULL)
    puts("Error al abrir el archivo..."); /* crea el archivo llamado arch3.txt
      en A: y lo asigna al puntero de archivo llamado puntero_archivo   */
{
  /*Escribimos la cadena con fputs()*/
  fputs(cadena_a_escribir,puntero_archivo);

  fclose(puntero_archivo); /* Cierra el archivo */

  /* Abrimos el archivo. Modo "r" para lectura  */
  puntero_archivo = fopen("arch3.txt", "r");
  printf("\n El contenido del fichero es:\n");

  //Leemos el archivo con fgets()
  fgets(cadena_leida, strlen(cadena_a_escribir)+1, puntero_archivo);

  /*Imprimo  la cadena leida */
  puts(cadena_leida);

  fclose(puntero_archivo);   /* Cierra el archivo */
  getch();   //detiene pantalla
  }
  return 0;
}
