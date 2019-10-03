/*Archivo1.cpp Programa que introduce al uso de archivos. Permite grabar un caracter
en un archivo y despues leerlo. Demuestra el empleo de put(c) y fputc() para escribir
en archivo y getc() y fgetc() para leer. Para grabar cadenas ver archivo2.cpp**/
#include <stdio.h>
#include <conio.h>

int main()
 {
   FILE *puntero_archivo;  /* declara un puntero al archivo */
   char caracter_a_escribir , caracter_leido;
   printf("Intro caracter a escribir en archivo: ");
   scanf("%c", &caracter_a_escribir);

  /* El archivo es creado y se graba datos en el   */
  if((puntero_archivo= fopen("archivo.txt", "w"))==NULL)
    puts("Error al abrir el archivo..."); /* crea el archivo llamado archivo.txt
    en A: y lo asigna al puntero de archivo llamado puntero_archivo   */
    else
  /*Ahora escribimos el caracter*/
  {
  putc(caracter_a_escribir,puntero_archivo);  /* La funcion putc() escribe en el
     	archivo apuntado por puntero_archivo el caracter enviado en lavariable
        caracter_a_escribir*/
   //TAMBIEN SE PUEDE EMPLEAR  fputc()

  fclose(puntero_archivo); 
  /* Cierra el archivo */

  /* Abrimos el archivo. Modo "r" para lectura  */

  puntero_archivo = fopen("archivo.txt", "r");

  caracter_leido =   getc(puntero_archivo); /* La funcion getc() lee desde  el
    archivo apuntado por el puntero_archivo y elcaracter leido lo asigna  a la
    variable caracter_leido */
    //TAMBIEN SE PUEDE EMPLEAR  fgetc()

  printf("\n El caracter leido es %c",caracter_leido); //Imprime caracter leido
  fclose(puntero_archivo);   /* Cierra el archivo */
  }
  getch();   //detiene pantalla
  return 0;
}
