#include <stdio.h>

int main(){
    /*LEGAJOS*/
    int numEmp, legajo, vent1=0,ceroVent=0, sumaVentas=0, cantVentas;
    printf("Introducir numero de empleados: ");
    scanf("%d",&numEmp);
    for(int i=1;i<numEmp+1;i++){
        printf("Introducir Legajo del empleado numero %d: ",i);
        scanf("%d",&legajo);
        printf("Introducir cantidad de ventas del venderdor: ");
        scanf("%d",&cantVentas);
        /* INCLUIR FOR */

        for(int j=1;j<cantVentas+1;j++){
            printf("venta %d: ",j);
            scanf("%d",&vent1);
            sumaVentas = sumaVentas+vent1;
        }

        if(cantVentas == 0){
                ceroVent++;
        }
        printf("El total de ventas del empleado %d es: %d \n",legajo,sumaVentas);
        sumaVentas = 0;


    }
    printf("El numero de vendedores que no hizo ventas es: %d /n",ceroVent);

    getchar();
    return 0;

}
