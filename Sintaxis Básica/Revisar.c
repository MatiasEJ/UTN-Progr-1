#include <stdio.h>
int main()
    {int n1, n2, o;
    printf("Ingrese el nro 1 \n");
    scanf("%d", &n1);
    printf("Ingrese el nro 2 \n");
    scanf("%d", &n2);
    if (n1!=n2)
            {if (n1>n2)
                    {if (n1%n2==0)
                    {printf("Es divisible");}
                    else printf("No es divisible");
            }
            else
                    {if (n2%n1==0)
                    {printf("Es divisible");}

            {printf("No es divisible");}
            }

    /* todo lo anterior se puede escribir de forma mas simple.
    No hace falta analizar si son iguales o no

    Preguntá si el primero es mayor o igual que el segundo, y analizas n1%n2,
    y si no (else) analizas n2% n1
    */



    }else printf("es divisible");

    return 0;

}
