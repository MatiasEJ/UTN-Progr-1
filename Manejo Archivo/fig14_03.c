/* Figura 14.3: fig14_03.c
   Uso de argumentos en la l�nea de comandos */
#include <stdio.h>

int main( int argc, char *argv[] )
{ 
   FILE *ptrEntArchivo; /* apuntador de archivo de entrada */
   FILE *ptrSalArchivo; /* apuntador de archivo de salida */
   int c;            /* define c para almacenar los caracteres introducidos por el usuario */

   /* verifica el n�mero de argumentos de la l�nea de comandos */
   if ( argc != 3 ) {
      printf( "Uso: copia archivoEnt archivoSal\n" );
   } /* fin de if */
   else {

      /* si el archivo de entrada se puede abrir */
      if ( ( ptrEntArchivo = fopen( argv[ 1 ], "r" ) ) != NULL ) {

         /* si el archivo de salida se puede abrir */
         if ( ( ptrSalArchivo = fopen( argv[ 2 ], "w" ) ) != NULL ) {

            /* lee los caracteres y los arroja */
            while ( ( c = fgetc( ptrEntArchivo ) ) != EOF ) {
               fputc( c, ptrSalArchivo );
            } /* fin de while */

         } /* fin de if */ 
         else { /* no se puede abrir el archivo de salida */
            printf( "El archivo \"%s\" no se pudo abrir\n", argv[ 2 ] ); 
         } /* fin de else */

      } /* fin de if */
      else { /* no se puede abrir el archivo de entrada */
         printf( "El archivo \"%s\" no se pudo abrir\n", argv[ 1 ] );
      } /* fin de else */

   } /* fin de else */

   return 0; /* indica terminaci�n exitosa */

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
