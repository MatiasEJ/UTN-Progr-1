//Funcion buscar version calvo

int Buscar(vector w, int tope, int b) //BÚSQUEDA SECUENCIAL.
{
    int i=0, ub=-1;
    while(i<tam &&ub==-1)
    {
        if(w[i]==b)
        {
            ub=i;
        }else i++;
    }
    return ub;
}

//otra version de calvo


int Buscar(vector w, int tam, int b)
{
    int i=0;
    while(i<tam && w[i]!=b)
    {i++;}
    if(i==tam)
    {return -1;}
    else
    {return i;}
}
