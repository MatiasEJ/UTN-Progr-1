 #include <stdio.h>

void menu();
void CrearArchivo(FILE *Arch);
void InsertarDatos(FILE *Arch );
void VerDatos(FILE *Arch);

struct sRegistro {
   char Nombre[25];
   int Edad;
   float Sueldo;
};

int main()
{
struct sRegistro registro;

        int opcion;
        int exit = 0;
        FILE *pArchivo;

        CrearArchivo(&pArchivo);

        menu();
        printf("\nOpcion: ");
        scanf("%d", &opcion);
        while (opcion!=3)
        {

                switch(opcion)
                {

                        case 1:
                                InsertarDatos(pArchivo);
                                break;
                        case 2:
                                VerDatos(pArchivo);
                                break;
                        default:
                                printf("\nopcion no valida");
                }
                menu();
                printf("\nOpcion: ");
                scanf("%d", &opcion);
        }

        return 0;
}

void menu()
{
        printf("\nMenu:");
        printf("\n\t1. Agregar registro");
        printf("\n\t2. Ver datos");
        printf("\n\t3. Salir");
}

void CrearArchivo(FILE *pArch)
{
       printf ("Se procede a abrir el archivo\n");
       pArch = fopen("pArchivo", "rb");

        if(!pArch)
        {
                pArch = fopen("pArchivo", "wb");
                printf("\nArchivo creado!");
        }
        else
        {
                printf("\nEl Archivo ya existe!");
        }

        fclose (pArch);

        //return;
}

void InsertarDatos(FILE *pArch)
{
        struct sRegistro reg;
        pArch = fopen("pArchivo", "ab");

        if(pArch == NULL)
        {
                printf("\nArchivo no existe\n");
                return;
        }

        printf("\nIngrese nombre: ");
        scanf("%s", reg.Nombre);

        printf("\nIngrese edad: ");
        scanf("%d", &reg.Edad);

        printf("\nIngrese sueldo: ");
        scanf("%f", &reg.Sueldo);

        fwrite(&reg, sizeof(struct sRegistro), 1, pArch);

        fclose(pArch);

        //return;
}

void VerDatos(FILE *pArch)
{
        struct sRegistro reg;
        int numero = 1;

        pArch= fopen("pArchivo", "rb");

        if(pArch == NULL)
        {
                printf("\nArchivo no existe \n");
                return;
        }

        fread(&reg, sizeof(struct sRegistro), 1, pArch);

        printf("\nNumero \tNombre \tEdad \tSueldo");

        while(!feof(pArch))
        {
                printf("\n%d \t%s \t%d \t%.2f", numero, reg.Nombre,reg.Edad, reg.Sueldo);
                fread(&reg, sizeof(struct sRegistro), 1, pArch);
                numero++;
        }
        fclose(pArch);
        //return;
}
