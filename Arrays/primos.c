#include <stdio.h>

int main(){
//    int num=0, divi =2,espar,primos=0,cantLeidos=-1,esc=-1;
//
//    while( num != esc){
//        divi = 2;
//        printf("introduzca numero para ver si es primo: ");
//        scanf("%d",&num);
//
//        espar= num%divi;
//        while( espar!=0 && divi<num ){
//            divi = divi+1;
//        }
//
//
//        if (divi == num ){
//            printf(" es primo\n");
//            primos++;
//        }else{
//            printf("el numero no es primo\n");
//
//        }
//        cantLeidos++;
//
//    }
//    printf("\nSe leyeron %d de los cuales %d son primos\n\n",cantLeidos,primos);



//una empresa quiere procesar las ventas de sus vendedores, los vendedores son N
//para cada vendedor se ingresa un numero determinado de veces una venta y la zona donde se realizo
//el fin de la ventas de cada vendedor se aplica con -1 y no se lee zona
//imprimir: de cada vendedor la cant total de ventas
//una vez procesado todo el grupo indicar cuantos no vendierton nada
//indicar total de ventas realizados en zona a por cualquier vendedor
//emitr la maxima suma de ventas realizadas

    int cantVend=0,ventMax=0, cantVentas = -1,numVent=0,sumaVentas=0,ESC =-1,noVent=0,sumaZona=0,aux=0;
    char zona;

    printf("ingresar numero de vendedores: ");
    scanf("%d",&cantVend);

    for(int i=1;i<cantVend+1;i++){
        printf("\nVendor numero %d \n",i);
        printf("Numero de ventas: ");
        scanf("%d",&cantVentas);



        for(int j=1;j<cantVentas+1;j++){

            printf("venta numero %d: ",j);
            scanf("%d",&sumaVentas);
            printf("zona: ");
            fflush(stdin);
            scanf("%c",&zona);
            fflush(stdin);
            if(zona == 'a'){
                sumaZona = sumaVentas+sumaZona;
            }
            aux = aux +sumaVentas;

            if(sumaVentas>ventMax){
                ventMax = sumaVentas;
            }
//
        }
        if(sumaVentas == 0){
            noVent++;
        }
        printf("la suma de las ventas %d \n",aux);
        aux=0;
        sumaVentas=0;
    }

    printf("no vendieron nada: %d\n",noVent);
    printf("el total de las ventas en la zona a es: %d",sumaZona);
    printf("\nLa maxima venta es %d \n",ventMax);




    getchar();
    return 0;

}
