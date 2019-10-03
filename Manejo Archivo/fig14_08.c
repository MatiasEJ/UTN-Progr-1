/* Figura 14.8: fig14_08.c
   Uso de la manipulación de señales */
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>

void manipSenal( int valorSenal ); /* prototipo */

int main()
{ 
   int i; /* contador utilizado para un ciclo de 10 repeticiones */
   int x; /* variable para almacenar valores al aleatorios entre 1 y 50 */
 
   signal( SIGINT, manipSenal ); /* registra el manipulador de señal */
   srand( clock() );
   
   /* muestra los números de 1 a 100 */
   for ( i = 1; i <= 100; i++ ) { 
      x = 1 + rand() % 50; /* genera números aleatorios hasta alcanzar SIGINT */
      
      /* alcanza SIGINT cuando x es 25 */
      if ( x == 25 ) {
         raise( SIGINT );     
      } /* fin de if */

      printf( "%4d", i );
      
      /* muestra \n cuando i es un múltiplo de 10 */
      if ( i % 10 == 0 ) {
         printf( "\n" );
      } /* fin de if */

   } /* fin de for */

   return 0; /* indica terminación exitosa */

} /* fin de main */

/* manipula la señal */ 
void manipSenal( int valorSenal )
{ 
   int respuesta; /* respuesta del usuario a la señal (1 or 2) */
   
   printf( "%s%d%s\n%s",
      "\nSenal de interrupcion ( ", valorSenal, " ) recibida.",
      "Desea continuar ( 1 = si o 2 = no )? " );
   
   scanf( "%d", &respuesta );
   
   /* verifica respuestas inválidas */
   while ( respuesta != 1 && respuesta != 2 ) { 
      printf( "( 1 = si o 2 = no )? " );
      scanf( "%d", &respuesta );
   } /*fin de while */
   
   /* determina si es tiempo de terminar */
   if ( respuesta == 1 ) {

      /* registra el manipulador de señales para el siguiente SIGINT */
      signal( SIGINT, manipSenal );
   } /* fin de if */
   else {
      exit( EXIT_SUCCESS );
   } /* fin de else */
 
} /* fin de la función manipSenal */



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
