/* Figura 14.9: fig14_09.c 
   Uso de goto */
#include <stdio.h>

int main()
{ 
   int cuenta = 1; /* inicializa cuenta */

   inicio: /* etiqueta */

      if ( cuenta > 10 ) {
         goto fin;
      } /* fin de if */

      printf( "%d  ", cuenta );
      cuenta++;

      goto inicio; /* ve a (goto) inicio en la línea 9 */

   fin: /* etiqueta */
      putchar( '\n' );

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