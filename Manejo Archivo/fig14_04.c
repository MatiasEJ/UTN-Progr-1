/* Figura 14.4: fig14_04.c
   Uso de las funciones exit y atexit */
#include <stdio.h>
#include <stdlib.h>

void imprime( void ); /* prototipo */

int main()
{ 
   int respuesta; /* elección de menú del usuario */

   atexit( imprime ); /* registra la nueva función imprime */
   printf( "Introduzca 1 para terminar el programa con la funcion exit"
      "\nIntroduzca 2 para terminar el programa de manera normal\n" );
   scanf( "%d", &respuesta );

   /* llama a exit si la respuesta es 1 */
   if ( respuesta == 1 ) { 
      printf( "\nTermina el programa con la funcion exit\n" );
      exit( EXIT_SUCCESS );
   } /* fin de if */

   printf( "\nTermina el programa al encontrar el final de main\n" );

   return 0; /* indica terminación exitosa */

} /* fin de main */

/* despliega una mensaje antes de terminar */
void imprime( void )
{ 
   printf( "Ejecuta la funcion imprime al "
      "finalizar el programa\nPrograma terminado\n" );
} /* fin de la función imprime */

 

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
