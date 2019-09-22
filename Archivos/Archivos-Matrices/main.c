#include <stdio.h>
#include <stdlib.h>
#include "funciones-matrices.h"
#define est 30
#define pa 50

typedef char string[25];
typedef int vec[5];
typedef struct{
    vec estant;
}estante;

typedef struct {
    int estante[est];
}pas;

typedef struct{
    int cod,ub,stock;
    string desc;

}articulo;

typedef pas pasillo[pa];

// PARCIAL 19 de SEPTIEMBRE
// funciones, vectores, strucs, ordenamientos, busquedas secuenciales y binarias

/**

EJERCICIOS DE MATRICES.
122. La “Ferretería Francesa” ha dispuesto sus artículos en un depósito que posee 50 pasillos,
donde en cada uno de ellos los estantes se numeran del 1 al 30. Por cada artículo, se tiene su
código, su ubicación (pasillo-estante), su descripción (ej. martillo) y su stock (ej. 3 unidades). Se
pide realizar un programa que disponga de un menú con las siguientes cuatro opciones:

 a) Dado un artículo que ingresa al depósito, conociendo el código del mismo el programa
deberá determinar si ya existe allí; de ser así , actualizará el stock, y en caso contrario, le
asignará una nueva ubicación (pasillo-estante) además de almacenar los datos necesarios.

 b) Dado un número de pasillo y estante, mostrar en pantalla el código, descripción y stock
del artículo que allí se encuentra; si el estante estuviese vacío, indicarlo con un mensaje.

 c) Indicar cuántos estantes vacíos hay en todo el depósito.

 d) Salir del programa.

**/


int main()
{
    pasillo pasillos;
    char opt;
    printf("Bienvenido.");
    printf("\na- Actualizar Stock");
    printf("\nb- Buscar Articulo");
    printf("\nc- Estantes vacios");
    printf("\nd- Salir");
    printf("\nPor favor. seleccione opcion: ");
    scanf("%c",&opt);

        switch (opt)
        {
        case 'a':
            printf("ingreso codigo");
//            ingreso(codigo, ubicacion, descripcion, stock){
//            si esta, actualiza stock +1, introduzco ubicacion, tomo datos
//            sino esta, introduzco ubicacion, tomo datos
//            }
            break;
        case'b':
            printf("ingreso codigo");
//            articulos()
//           codigoPasilloEstante(ubicacion){
//            muestra codigo, descripcion y stock,
//            si no hay stock, avisar
//            }
            break;
        case 'c':
            printf("busqueda art");
//            contarEstantesVacios(estantes){
//            si estantes vacios = ALERTA
//             }
            break;
        case 'd':
            printf("gracias adiosh");
            break;
        default:
            break;
        }







}
