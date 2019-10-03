#include <stdio.h>
 
void menu();
void CrearArchivo(FILE *Arch);
void InsertarDatos(FILE *Arch, struct sRegistro reg );
void VerDatos(FILE *Arch, struct sRegistro reg);
 
struct sRegistro {
   char Nombre[25];
   int Edad;
   float Sueldo;
};
 
main()
{
struct sRegistro registro;
    
        int opcion;
        int exit = 0;
        FILE *Archivo;
 
        while (!exit)
        { 
                menu();
                printf("\nOpcion: ");
                scanf("%d", &opcion);
 
                switch(opcion)
                {
                        case 1:
                                CrearArchivo(Archivo);
                        break;
                        case 2:
                                InsertarDatos(Archivo, registro);
                        break;
                        case 3:
                                VerDatos(Archivo, registro);
                        break;
                        case 4:
                                exit = 1;
                        break;
                        default:
                                printf("\nopcion no valida");
                }
        }
 
        return 0;
}
 
void menu()
{
        printf("\nMenu:");
        printf("\n\t1. Crear Archivo");
        printf("\n\t2. Insertar datos");
        printf("\n\t3. Ver datos");
        printf("\n\t4. Salir");
}
 
void CrearArchivo(FILE *Arch)
{
        Arch = fopen("Archivo", "r");
 
        if(!Arch)
        {
                Arch = fopen("Archivo", "w");
                printf("\nArchivo creado!");
        }
        else
        {
                printf("\nEl Archivo ya existe!");
        }
 
        fclose (Arch);
 
        //return;
}
 
void InsertarDatos(FILE *Arch, struct sRegistro reg)
{
        Arch = fopen("Archivo", "a+");
 
        if(Arch == NULL)
        {
                printf("\nArchivo no existe! \nPor favor creelo");
                return;
        }
 
        printf("\nDigita el nombre: ");
        scanf("%s", reg.Nombre);
 
        printf("\nDigita la edad: ");
        scanf("%d", &reg.Edad);
 
        printf("\nDigita el sueldo: ");
        scanf("%f", &reg.Sueldo);
 
        fwrite(&reg, sizeof(struct sRegistro), 1, Arch);
 
        fclose(Arch);
 
        //return;
}
 
void VerDatos(FILE *Arch, struct sRegistro reg)
{
        int numero = 1;
 
        Arch= fopen("Archivo", "r");
 
        if(Arch == NULL)
        {
                printf("\nArchivo no existe! \nPor favor creelo");
                return;
        }
 
        fread(&reg, sizeof(struct sRegistro), 1, Arch);
 
        printf("\nNumero \tNombre \tEdad \tSueldo");
 
        while(!feof(Arch))
        {
                printf("\n%d \t%s \t%d \t%.2f", numero, reg.Nombre,reg.Edad, reg.Sueldo);
                fread(&reg, sizeof(struct sRegistro), 1, Arch);
                numero++;
        }
        fclose(Arch);
        //return;
}
