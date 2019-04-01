#include <stdio.h>
#include "arreglo.h"

void cargarArreglo (arreglo &a)
{
    int ind;
    for (ind = 0; ind < TAM; ind++)
    {
        printf ("\n Ingrese un valor: ");
        scanf ("%d", &a[ind]);
    }
}

int sumarArreglo (arreglo a)
{
    int ind, suma = 0;
    for (ind = 0; ind < TAM; ind++)
        suma = suma + a[ind];
    return suma;
}

float promedioArreglo (arreglo a)
{
    float suma = sumarArreglo(a);
    return (suma / TAM);
}

void printArreglo (arreglo a)
{
    int ind;
    printf ("\nContenido del arreglo: ");
    for (ind = 0; ind < TAM; ind++)
        printf("%d", a[ind]);
}

boolean perteneceAlArreglo (arreglo a, int elem)
{
    boolean esta = FALSE;
    int ind = 0;
    while (!esta && ind < TAM)
    {
        if (a[ind] == elem)
            esta = TRUE;
        ind++;
    }
    return esta;
}

int multiplosAlArreglo (arreglo a, int enteroDado)
{
    int ind, cuantos = 0;
    for (ind = 0; ind < TAM; ind++)
        if(a[ind] % enteroDado == 0)
            cuantos++;
    return cuantos;
}

void mayoryPosicion (arreglo a, int &mayor, int &posicion)
{
    int ind;
    mayor = a[0];
    posicion = 0;
    for (ind = 1; ind < TAM; ind++)
    {
        if (a[ind] > mayor)
        {
            mayor = a[ind];
            posicion = ind;
        }

    }
}

void invertirArreglo(arreglo A, arreglo &arrinvertido)
{
    int ind;
    for (ind = 0; ind < TAM; ind++)
        arrinvertido [TAM-1-ind]= A[ind];
}

void primerUltimoElementoArreglo (arreglo a, int &primer, int &ultimo)
{
    primer = a[0];
    ultimo = a[TAM - 1];
}
