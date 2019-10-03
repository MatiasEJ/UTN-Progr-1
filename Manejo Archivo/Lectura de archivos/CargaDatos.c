#include<stdio.h>
#include<stdlib.h>

#include<string.h>
#include<conio.h>

// esto grba un archivo

int main ()
{
    char frase [30];
    char finciclo [5]= "exit";

    FILE *p;

    p= fopen ("Miarchivo.txt", "w");

    if (p)
    {
        while (strcmp(frase,finciclo) != 0)
        {
     printf ("Ingrese una frase \n");
     scanf("%s",frase);
     fprintf (p, "%s" ,frase);

//strcpy(frase,finCiclo);
       }
       fclose (p);

    }


    return 0;
}
