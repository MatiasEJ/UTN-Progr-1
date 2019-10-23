#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "func.h"

void menu() //SUPERGRAFICOS DE ULTRA TECNOLOGIA //CON LA OPCION 6 se acccede a todo el registro.!!
{
    printf("\n\n");
    printf("\n  ---------------------------------");
    printf("\n  |          == Menu ==           |");
    printf("\n  | [1]. Agregar registro         |");
    printf("\n  | [2]. Borrar registro          |");
    printf("\n  | [3]. Modificar registro       |");
    printf("\n  | [4]. Buscar datos             |");
    printf("\n  | [5]. Salir                    |");




}


int opciones() //Pregunta si el usuario esta activo
{
    char act;
    int val;
    printf("  | Usuario Activo?(s/n): ");
    fflush(stdin);
    act = getchar();
    fflush(stdin);
    if(act == 's'){return val=1;}else if(act == 'n'){return val = 0;}
    return 0;

}



//El programa debe chequear que el archivo exista. Si no existe, debe crearlo. El nombre del archivo en disco será ingresado por el usuario. Es opcional que el usuario también indique la carpeta de trabajo.
void CrearArchivo(FILE *dbEmps,palabra nuevoArch)
{
    char opt;
    palabra nombArchivo;

    dbEmps = fopen("dbEmps", "rb");


    if(!dbEmps)
    {
        printf("Base de datos default: No encontrada.");
        printf("\nCrear Nueva(n)/Utilizar DB vieja(v): ");
        opt= getchar();
        printf("  ----------------------------------------");
        if(opt == 'n')
        {
            printf("\nNombre nueva DB: ");
            scanf("%s",nombArchivo);
            fflush(stdin);
            dbEmps = fopen(nombArchivo, "wb");
            printf("\nArchivo %s creado!",nombArchivo);
            strcpy(nuevoArch,nombArchivo);

        }
        else if(opt == 'v')
        {
            printf("\nNombre DB a utilizar: ");
            scanf("%s",nombArchivo);
            fflush(stdin);

            dbEmps = fopen(nombArchivo, "rb");
            if(!dbEmps)
            {
                printf("DB: %s NO ENCONTRADA",nombArchivo);
                CrearArchivo(dbEmps,nuevoArch);
            }
            else
            {
                strcpy(nuevoArch,nombArchivo);
                printf("\n  == TRABAJANDO EN DB: %s ==",nombArchivo);
            }

        }


    }
    else
    {
        printf("\nEl Archivo ya existe!");
    }

    fclose (dbEmps);

}


////Agregar un registro: se agrega al final de los que haya almacenados previamente. Hay que chequear que el registro no existiera previamente, e indicar esta situación, de verificarse, con un mensaje.
void InsertarDatos(FILE *dbEmps,palabra nuevoArch)
{
    empleado punt;
    int existe;

    palabra sarasa;
    strcpy(sarasa,nuevoArch);
    dbEmps = fopen(nuevoArch, "ab");

    if(dbEmps == NULL)
    {
        printf("\nArchivo no existe\n");
        exit(1);
        return;
    }else{
        existe = legajo(dbEmps,sarasa);
        if(existe!=1){
            punt.legajo = existe ;
            intDats(&punt);
            fwrite(&punt, sizeof(empleado), 1, dbEmps);
            printf("\n  -= LEGAJO %d AGREGADO A LA DB =-", punt.legajo);
        }

    }

    fclose(dbEmps);
}


////Modificar un registro: el usuario ingresará la opción de modificar y luego el legajo. Se ubicará el legajo. De no existir, se indicará por pantalla. Si existe, se solicitará al usuario los datos (atención: el número de legajo no puede ser cambiado) y se grabará el nuevo registro encima del original., modificando así los datos.
void modReg(FILE *dbEmps,palabra nuevoArch)
{
    empleado punt;
    int leg,existe=0;
    palabra sarasa;
    strcpy(sarasa,nuevoArch);
    printf("\n  ---- MODIFICACION DE ARCHIVOS ----");
    printf("\n  Legajo a modificar: ");
    scanf("%d",&leg);
    fflush(stdin);
    dbEmps = fopen(sarasa, "r+b");

    int nReg;/*Guarda el número de registros*/
    if(dbEmps!=NULL)
    {
        fseek(dbEmps,0,SEEK_END);
        nReg=ftell(dbEmps)/sizeof(empleado);
        rewind(dbEmps);
        printf("\n  Registros en el archivo = %d\n",nReg); /* CANTIDAD DE REGISTROS EN EL ARCHIVO*/

        fread(&punt, sizeof(empleado), 1, dbEmps);
        while(!feof(dbEmps))
        {
            if(punt.legajo == leg)
            {

            intDats(&punt);

                int pos=ftell(dbEmps)-sizeof(empleado);
                fseek(dbEmps,pos,SEEK_SET);

                fwrite(&punt, sizeof(empleado), 1, dbEmps);
                printf("\n  -= MODIFICACION REALIZADA EN LEGAJO %d =-",leg);

                existe=1;
                fseek(dbEmps,0,SEEK_END);
            }
            fread(&punt,sizeof(empleado),1,dbEmps);
        }
    }
    else
    {
        printf("Error en la apertura del archivo\n");
    }
    if (existe==0)
    {
        printf("No existe legajo\n");
    }
    fclose(dbEmps);
}

//
////Borrar un registro: se trata de una baja lógica (se marca como deshabilitado, colocando un valor adecuado en el campo Activo). Chequear antes que el registro exista y que esté activo. De lo contrario, indicar con un mensaje.
void deleteReg(FILE *dbEmps,palabra nuevoArch)
{
    palabra sarasa;
    strcpy(sarasa,nuevoArch);
    int leg,existe=0;

    empleado reg;

    printf("\n  ---- BORRACION ----");
    printf("\n  Legajo a borrar: ");
    scanf("%d",&leg);
    dbEmps = fopen(sarasa, "r+b");



    if(dbEmps == NULL)
    {
        printf("\nArchivo no existe\n");
        exit(1);
        return;
    }
    while(!feof(dbEmps))
    {
        if(reg.legajo == leg)
        {
            reg.activ = 0;
            int pos=ftell(dbEmps)-sizeof(empleado);
            fseek(dbEmps,pos,SEEK_SET);

            fwrite(&reg, sizeof(empleado), 1, dbEmps);
            printf("\n == MODIFICACION REALIZADA CON EXITO ==");

            existe = 1;
            fseek(dbEmps,0,SEEK_END);
        }
        fread(&reg,sizeof(empleado),1,dbEmps);


    }

    if (!existe )
        printf("\n -- NO SE ENCONTRO EL LEGAJO %d --",leg);
    fclose(dbEmps);

}
//
////Buscar un registro: se ingresa un legajo y el registro se emite por pantalla o bien se indica que no existe (si ha sido dado de baja lógica se considera que no existe).
void buscReg(FILE *dbEmps,palabra nuevoArch)
{
    empleado punt;
    int numero = 1;
    int i,leg,activo=0;
    palabra sarasa;
    strcpy(sarasa,nuevoArch);
    dbEmps= fopen(sarasa, "rb");

    if(dbEmps == NULL)
    {
        printf("\nArchivo no existe \n");
        return;
    }

    printf("\n  ---- Busqueda de Activo ----");
    printf("\n  Legajo activo a buscar: ");
    scanf("%d",&leg);

    system("cls");
	printf(" ------------------------------------------------------------------------------\n");
	printf("\t%s \t%s\t\t%s \t\t%s\t%s\n", "N", "LEGAJO", "NOMBRE", "APELLIDO", "COMPRAS");
	printf(" ------------------------------------------------------------------------------\n");

    fread(&punt, sizeof(empleado), 1, dbEmps);
    while(!feof(dbEmps))
    {

        if(punt.legajo == leg && punt.activ == 1){
            printf("\n\t%d \t%d\t\t%s \t\t%s\t\t", numero, punt.legajo,(char*)punt.nombre, (char*)punt.apellido);
            for(i=0; i<5; i++)
            {
                printf("|%d ",punt.compras[i]);
            }
            numero++;
            activo = 1;
        }


        fread(&punt, sizeof(empleado), 1, dbEmps);
    }

    if (!activo){printf("\n  -= Usuario no activo =-");}

    fclose(dbEmps);
    //return;
}


//PIDE AL USUARIO DATOS DEL REGISTRO, excepto el LEGAJO.
void intDats(empleado *reg){
    char act;
    printf("\n  --------------------------------------");
    printf("\n  | Ingrese Nombre: ");
    scanf("%s", (char *)reg->nombre);
    printf("  | Ingrese Apellido: ");
    scanf("%s", (char *)reg->apellido);
    for(int i=0; i<5; i++){
        printf("  | Venta [%d]: ",i);
        scanf("%d", &(reg->compras[i]));
        fflush(stdin);
    }

    act = opciones();
    reg->activ = act;

}

//CON LA OPCION 6 se acccede a todo el registro.
void mostrarTodo(FILE *dbEmps,palabra nuevoArch){
    empleado punt;
    int numero = 1;
    int i;

    palabra sarasa;
    strcpy(sarasa,nuevoArch);

    dbEmps= fopen(sarasa, "rb");

    if(dbEmps == NULL)
    {
        printf("\nArchivo no existe \n");
        return;
    }
    fread(&punt, sizeof(empleado), 1, dbEmps);

    	system("cls");
    	printf(" -----------------------------------------------------------------------------------------------------------\n");
		printf(" TRABAJANDO EN DB: %s \n",nuevoArch);
		printf(" -----------------------------------------------------------------------------------------------------------\n");
		printf("\t%-5s\t%s\t\t%s\t\t%s\t%s\t%s\n", "N", "LEGAJO", "NOMBRE", "APELLIDO", "ACT", "COMPRAS");
		printf(" -----------------------------------------------------------------------------------------------------------\n");

    while(!feof(dbEmps))
    {
        //vertodo
        printf("\n\t%-5d\t%d\t\t%s\t\t%s\t\t%d\t", numero, punt.legajo,(char*)punt.nombre, (char*)punt.apellido,punt.activ);
        for(i=0; i<5; i++)
        {
            printf("|%d ",punt.compras[i]);
        }
        numero++;

        fread(&punt, sizeof(empleado), 1, dbEmps);
    }
    fclose(dbEmps);
}

//CHEQUEA LA EXISTENCIA DEL LEGAJO, sino existe devuelve el valor Introducido.
int legajo(FILE *dbEmps,palabra nuevoArch)
{
    empleado punt;

    int leg,existe;
    palabra sarasa;
    strcpy(sarasa,nuevoArch);
    dbEmps= fopen(sarasa, "rb");

    if(dbEmps == NULL)
    {
        printf("\nArchivo no existe \n");
    }

    printf("\n  ---- Busqueda de Activo ----");
    printf("\n  Legajo: ");
    scanf("%d",&leg);

    fread(&punt, sizeof(empleado), 1, dbEmps);
    while(!feof(dbEmps))
    {

        if(punt.legajo == leg){
            existe = 1;
        }

        fread(&punt, sizeof(empleado), 1, dbEmps);
    }
    fclose(dbEmps);
    if (existe == 1){
        system("cls");
        printf("\n  -= LEGAJO EXISTESTES =-");
        return existe = 1;
    }else{
        printf("\n  -= LEGAJO NO EXISTE EN LA DB =-");
        return leg;
    }
}

