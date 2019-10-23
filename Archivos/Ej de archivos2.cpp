//1)analizar si un archivo cuyo nombre se ingresa existe o no; si no existe, lo crea. Si existe se grabara con "ab".2)presentar un menu asi:
//a)agregar un registro; b)modificar un registro; c)dar de baja; d)listar; e)salir (todas tienen q ser funciones).

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
   char Nombre[25];
   int Edad;
   float Sueldo;
   int Activo;
}Registro;

void menu()
{
        printf("\nMenu:");
        printf("\n\t1. Agregar registro");
        printf("\n\t2. Modificar un registro");
        printf("\n\t3. Dar de baja");
        printf("\n\t4. Ver datos");
        printf("\n\t5. Salir");
}

void CrearArchivo(FILE *pArch)
{
       printf ("Se procede a abrir el archivo\n");
       pArch = fopen("pArchivo.txt", "rb");

        if(!pArch)
        {
                pArch = fopen("pArchivo.txt", "wb");
                printf("\nArchivo creado!");
        }
        else
        {
                printf("\nEl Archivo ya existe!");
        }

        fclose (pArch);

      
}

void InsertarDatos(FILE *pArch)
{
        Registro reg;
        pArch = fopen("pArchivo.txt", "ab");

        if(pArch == NULL)
        {
                printf("\nArchivo no existe\n");
                return;
        }

        printf("\nIngrese nombre: ");
        scanf("%s", &reg.Nombre);

        printf("\nIngrese edad: ");
        scanf("%d", &reg.Edad);

        printf("\nIngrese sueldo: ");
        scanf("%f", &reg.Sueldo);
        
        printf("\nEsta activo? (1 es si y 0 es no): ");
        scanf("%d", &reg.Activo);

        fwrite(&reg, sizeof(Registro), 1, pArch);

        fclose(pArch);

        //return;
}

void ModificarDatos (FILE *pArch){
     char nomb[25];
     Registro reg;
         
     printf ("\nIngrese el nombre de la persona que desee modificar los datos: ");
     fflush (stdin);
     scanf ("%s",&nomb); 
     
     pArch= fopen("pArchivo.txt", "rb");
                  
     while (strcmp(nomb,Registro.Nombre)!=0){
     fread (&reg,sizeof(Registro),1,pArch);
                                         }
     strcpy(nomb,Registro.Nombre);
     
     printf ("\nIngrese la nueva edad\n");
     scanf ("%d",&Registro.Edad);
     
     printf ("\nIngrese su nuevo sueldo\n");
     scanf ("%f",&Registro.Sueldo);
     
     printf ("\nEsta activo? (1 es si y 0 es no)\n");
     scanf ("%d",Registro.Activo);                                    
                                         }
     
void VerDatos(FILE *pArch)
{
        Registro reg;
        int numero = 1;

        pArch= fopen("pArchivo.txt", "rb");

        if(pArch == NULL)
        {
                printf("\nArchivo no existe \n");
                return;
        }

        fread(&reg, sizeof(Registro), 1, pArch);

        printf("\nNumero \tNombre \tEdad \tSueldo \tActivo? (1 es si, 0 es no)");

        while(!feof(pArch))
        {
                printf("\n%d \t%s \t%d \t%.2f \t%d", numero, reg.Nombre,reg.Edad,reg.Sueldo,reg.Activo);
                fread(&reg, sizeof(Registro), 1, pArch);
                numero++;
        }
        fclose(pArch);
     
}

int main(){
    int opcion;
    int exit = 0;
    FILE *pArchivo;

    CrearArchivo(pArchivo);

    menu();
    printf("\nOpcion: ");
    scanf("%d", &opcion);
    while (opcion!=3)
        {

                switch(opcion)
                {

                        case 1: InsertarDatos(pArchivo);
                        break;
                        
                        case 2: ModificarDatos(pArchivo);
                        break;     
                        
                        case 3: VerDatos(pArchivo);
                        break;
                        
                        case 4: DardeBaja(pArchivo);
                                
                        default:
                                printf("\nopcion no valida");
                }
                menu();
                printf("\nOpcion: ");
                scanf("%d", &opcion);
        }

return 0;
system ("pause");
}                    
