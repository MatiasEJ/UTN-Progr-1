#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "func.h"



int main()
{
    int opcion;
    palabra nuevoArch;

    FILE *dbEmps;
    dbEmps = fopen("dbEmps","rb");
    CrearArchivo(dbEmps,nuevoArch);

    menu();
    printf("\n  | Ingrese seleccion: [ ]\b\b");
    scanf("%d",&opcion);
    printf("\n----------------------------\n");
    fflush(stdin);
    while (opcion!=-1)
    {
        switch(opcion)
        {
        case 1:
            InsertarDatos(dbEmps,nuevoArch);
            break;
        case 2:
            deleteReg(dbEmps,nuevoArch);
            break;
        case 3:
            modReg(dbEmps,nuevoArch);

            break;
        case 4:
            buscReg(dbEmps,nuevoArch);
            break;
        case 5:
            printf("\n\n***  SALIENDO  ***\n\n\n");
            exit(0);
            break;
        case 6:
            mostrarTodo(dbEmps,nuevoArch);
            break;
        default:
            printf("\nOpcion no valida");
        }
        menu();
        printf("\n  | Ingrese seleccion: [ ]\b\b");
        scanf("%d",&opcion);
    }

}

