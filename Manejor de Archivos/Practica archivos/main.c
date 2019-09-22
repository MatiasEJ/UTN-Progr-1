#include <stdio.h>
#include <string.h>
#include "func.h"


int main(){
    int i,j;
    matriz mat;
    vector vec1,vec2;
//    //4 zonas, 7 dias
    inicializar(mat,2,3); //CEROS A TODOS
    mostrar(mat,2,3);
    cargar(mat,2,3);
//    mostrar(mat,2,3);

    //se obtienen totales por fila
    //Crea un vector con los datos fila
    procFil(mat, vec1, 2,3);

    //emitir los totales por zona, diseñar funcion
    //ahora se presentan los dias para obtener los totales

//    procCol(mat, vec2, 2, 3);

    mostrar(mat,2,3);
    //se ordenan y emiten los totales por dias con el nombre del dia
    ordenaEmite(vec1, 3);


    return 0;

}
