#include <stdlib.h>
#include <stdio.h>
void AbrirAlquileres (FILE *Alquileres)
{
    printf ("Se procede a abrir el archivo Alquileres\n");
    Alquileres=fopen ("c:Alquileres.dat","rb");
    fscanf (FILE *Alquileres,"%d",&CodigoPeliculaPedida);
    while (!feof(Alquileres))
    {

    }
}
void AbrirAPeliculas (FILE *APeliculas)
{
    printf ("Se procede a abrir el archivo Peliculas\n");
    APeliculas=fopen ("c:APeliculas.dat","rb");
}

int main()
{

system ("pause");
return 0;
}
