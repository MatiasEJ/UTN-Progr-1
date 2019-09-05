#include <stdio.h>

int main(){
    int valorA=0, suma=0;
    int numDatos=5, cont=0, valores = 0;
//    int valor, resultado;
//        printf("Introduce un numero entero: ");
//        scanf("%d",&valor);
//        resultado = valor%2; //EL RESTO DE LA DIVISION POR 2
//        if(resultado){
//            printf("El numero introducido es IMPAR\n"); //SI EL RESTO ES ALGO no es par
//        }else{
//            printf("el numero introducido era PAR\n"); //
//        }

//Desarrolla un algoritmo que le permita leer tres valores A, B y C e indique cual es valor del centro.
//Análisis: Una vez leídos los valores en cada uno de los indicadores (variables A, B, C)
//se procede a comparar cada uno de ellos con los otros dos para verificar si es valor del centro o no.
//Un valor es del centro si es menor que uno y mayor que otro o el caso contrario.
//Igualmente se asume que los tres valores leídos son diferentes.
//    int valA, valB,valC, mayor, menor;
//    printf("Introducir valor A");
//    scanf("%d",&valA);
//    printf("Introducir valor B");
//    scanf("%d",&valB);
//    printf("Introducir valor C");
//    scanf("%d",&valC);
//
//
//
//    if(valA > valB && valA>valC){
//        mayor = valA;
//        printf("el mayor es Valor A");
//    }else if(valB > valA && valB>valC){
//        mayor = valB;
//        printf("el mayor es Valor A");
//    }else if(valB > valA && valB>valC){
//
//    }


//    SE LEE NUMERO ENTERO HASTA QUE APAREZCA -1
//    EMITE LA SUMA DE LOS NUMEROS
//
//    se lee un valor n y luego n numero enteros
//    Emite la suma de los numeros leidos


//
//    while(valorA != -1){
//        suma += valorA;
//        printf("Introduzca valor: ");
//        scanf("%d",&valorA);
//
//    }
//    printf("la suma es: %d",suma);

    /* ************************ */
    /* DO WHILE*/

//    printf("Introducir cantidad de numeros a tomar: ");
//    scanf("%d",&numDatos);
//
//    while(cont <= numDatos){
//
//        printf("Ingrese el valor %d: ",cont);
//        scanf("%d",&valores);
//        suma += valores;
//        cont++;
//    }
//
//    printf("la suma de los datos es: %d ",suma);

    for(cont; cont < numDatos; cont++){
        printf("ingrese el valor %d: ",cont+1);
        scanf("%d",&valores);
        suma += valores;
    }
    printf("la suma de los datos es: %d ",suma);

    getchar();
    return 0;

}
