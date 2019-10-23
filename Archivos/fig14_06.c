/* Figura 14.6: fig14_06.c
   Uso de archivos temporales */
#include <stdio.h>

int main()
{
   FILE *ptrArchivo;     /* apuntador al archivo a modificar */
   FILE *ptrArchivoTemp; /* apuntador al archivo temporal */
   int c; /* define c para almacenar los caracteres leídos desde el archivo */
   char nombreArchivo[ 30 ]; /* crea un arreglo de caracteres */

   printf( "Este programa cambia tabuladores por espacios.\n"
      "Introduzca un archivo a modificar: " );
   scanf( "%29s", nombreArchivo );

   /* fopen abre el archivo */
   if ( ( ptrArchivo = fopen( nombreArchivo, "r+" ) ) != NULL ) {

      /* crea un archivo temporal */
      if ( ( ptrArchivoTemp = tmpfile() ) != NULL ) {
         printf( "\nEl archivo antes de la modificacion es:\n" );

         /* lee caracteres desde un archivo y los coloca en un archivo temporal */
         while ( ( c = getc( ptrArchivo ) ) != EOF ) {
            putchar( c );
            putc( c == '\t' ? ' ': c, ptrArchivoTemp );
         } /* fin de while */

         rewind( ptrArchivoTemp );
         rewind( ptrArchivo );
         printf( "\n\nEl archivo despues de la modificacion es:\n" );

         /* lee desde un archivo temporal y escribe en el archivo original */
         while ( ( c = getc( ptrArchivoTemp ) ) != EOF ) {
            putchar( c );
            putc( c, ptrArchivo );
         } /* fin de while */

      } /* fin de if */
      else { /* si no se puede abrir el archivo temporal */
         printf( "No se puede abrir el archivo temporal\n" );
      } /* fin de else */

   } /* fin de if */
   else { /* si no se puede abrir el archivo */
      printf( "No se puede abrir el archivo %s\n", nombreArchivo );
   } /* fin de else */

   return 0; /* indica terminación exitosa */

} /* fin de main */



/**************************************************************************
 * (C) Copyright 1992-2004 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
