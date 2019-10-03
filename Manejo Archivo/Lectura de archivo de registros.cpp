#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct alumno
{ int legajo;
  char curso;
  float nota;       
};

int main()

{  char ruta[15]="c:\\Alumnos.dat";
   char decide;

   

    FILE *f;
    if(fopen(ruta,"w")==NULL)
    {
    do{
     printf("El archivo que intenta leer no existe...");
     printf("\nQuiere escribir la ruta? S=Si, N=No: ");
     scanf("%c",&decide);
     if(decide=='s'||decide=='S')
                   {printf("\n\tIngrese la ruta: ");
                    scanf("%s",&ruta);
                    if(fopen(ruta,"w")==NULL)
                    printf("\n\n-Tampoco existe el archivo en la ruta especificada-");
                    else//Si existe el archivo... arranca la manipulacion de datos
                    {f=fopen("c:\\Alumnos.dat","w");
                     fread(&unalumno,sizeof(unalumno),1,f);
                     while(!feof(f))
                     {Emitir(unalumno);
                      fread(unalumno,sizeof(unalumno),1,f);
                      }
                      while(!feof(f))
                      {fgets(......);
                       puts(palabra);
                       //o bien printf("%s",palabra)
                       fclose(f);
                       ....
                       }
                        }
                                                                                      }else 
                                                                                            if(decide=='n'||decide=='N')
                                                                                            printf("\nNo hay archivo.\n");
     }while(decide=='s'||decide=='S');
   
   }
   
}
