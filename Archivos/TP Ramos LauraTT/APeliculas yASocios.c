#include <stdlib.h>
#include <stdio.h>
struct peliculas
{
int  CodigoPelicula;
char Nombre[20];
int CantidadaAlquilar;
int baja;
};
struct Alquileres
{
int Numerosocio;
char Nombreapellido [22];
int CodigoPeliculaPedida;
char telefono[8];
};
void CrearArch(FILE *APeliculas)
{
    printf ("Se procede a abrir el archivo Peliculas\n");
    APeliculas=fopen ("c:APeliculas.dat","rb");
        if (!APeliculas)
            {
            APeliculas = fopen ("c:APeliculas.dat","wb");
            printf ("Archivo creado\n");
            }
        else
            {
            printf("el archivo ya existe\n");
            }
    fclose(APeliculas);
}
void IngresarDatos (FILE *APeliculas)
{
    int i;
    struct peliculas pel;
    APeliculas=fopen ("APeliculas.dat","w");
    for (i=0;i<5;i++)
    {
    printf("Ingrese el codigo de la pelicula\n");
    scanf ("%d",&pel.CodigoPelicula);
    printf ("Ingrese el nombre de la pelicula\n");
    scanf ("%s",&pel.Nombre);
    printf ("Ingrese la cantidad de copias\n");
    scanf ("%d",&pel.CantidadaAlquilar);
    fwrite( &APeliculas, sizeof(struct peliculas),1,APeliculas);
    }
    fclose(APeliculas);
}
void CrearArchivoAlquileres (FILE *Alquileres)
{
    printf ("Se procede a abrir el archivo Alquileres\n");
    Alquileres=fopen ("c:Alquileres.dat","rb");
        if (!Alquileres)
            {
            Alquileres = fopen ("c:Alquileres.dat","wb");
            printf ("Archivo creado\n");
            }
        else
            {
            printf("el archivo ya existe\n");
            }
    fclose(Alquileres);
}
void IngresarDatosAlquileres (FILE *Alquileres)
{
  int i;
    struct Alquileres alq;
    Alquileres=fopen ("Alquileres.dat","wb");
    for (i=0;i<5;i++)
    {
    printf("Ingrese el numero de socio\n");
    scanf ("%d",&alq.Numerosocio);
    printf ("Ingrese el nombre y apellido del socio\n");
    scanf ("%s",&alq.Nombreapellido);
    printf ("Ingrese el codigo de la pelicula pedida\n");
    scanf ("%d",&alq.CodigoPeliculaPedida);
    printf ("Ingrese el telefono del socio\n");
    scanf ("%s",&alq.telefono);
    fwrite(&Alquileres, sizeof(struct Alquileres),1,Alquileres);
    }
    fclose(Alquileres);
}
int main ()
{
struct peliculas peli;
FILE *APeliculas;
CrearArch(APeliculas);
IngresarDatos(APeliculas);
FILE *Alquileres;
CrearArchivoAlquileres(Alquileres);
IngresarDatosAlquileres(Alquileres);
system ("pause");
return 0;
}

