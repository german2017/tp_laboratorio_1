
#include "Biblioteca.h"
int PedirEntero(char mensaje[], char error[], int minimoRango, int maximoRango)//Burbuja de generacion expontanea
{
    int numeroIngresado;//variable local

    printf("%s", mensaje);
    scanf("%d", &numeroIngresado);
    while(numeroIngresado<minimoRango || numeroIngresado>maximoRango)
    {
        printf("%s: ", error);
        scanf("%d", &numeroIngresado);
    }


    return numeroIngresado;
}

