#include <stdio.h>
#include "boolean.h"
#include "string.h"
#include "arreglo.h"



int main()
{

    /*string s, s1, s2;
    boolean esmenor, iguales;
    printf("Ingrese la frase s: ");
    scan(s);
    printf ("Usted ingreso: ");
    print(s);
    printf ("\nEl largo es: %d\n", strlar(s));

    printf("\nIngrese la frase s1: ");
    scan(s1);
    printf ("Usted ingreso: ");
    print(s1);
    printf ("\nEl largo es: %d\n", strlar(s1));

    printf("\nIngrese la frase s2: ");
    scan(s2);
    printf ("Usted ingreso: ");
    print(s2);
    printf ("\nEl largo es: %d\n", strlar(s2));

    esmenor = strmen(s,s1);
    if (esmenor)
        printf ("\nLa primer frase es menor que la segunda");
    else
        printf ("\nLa primer frase NO es menor que la segunda");

    iguales = streq(s,s1);
    if (iguales)
        printf ("\nLas frases son iguales");
    else
        printf ("\nLas frases NO son iguales");

    strcop(s2,s1);
    printf ("\nAhora copiara el contenido de s1 al de s2");
    printf ("\nContenido de S1: ");
    print(s1);
    printf ("\nContenido de S2: ");
    print(s2);

    strcon(s,s1);
    printf ("\nAhora unira el contendio de s1 al final de s");
    printf ("\nContenido de S: ");
    print(s);

    printf ("\nContenido de S: ");
    print(s);
    printf ("\nContenido de S1: ");
    print(s1);
    printf ("\nContenido de S2: ");
    print(s2);

    strswp(s,s2);
    printf ("\nAhora intercambio los contenidos de s y s2");
    printf ("\nContenido de S: ");
    print(s1);
    printf ("\nContenido de S2: ");
    print(s2);*/


    arreglo a, arregloInvertido;
    int pertenece, multiplo, cantidadMultiplos;

    cargarArreglo(a);
    printArreglo(a);
    printf ("\nLa suma del arreglo es: %d", sumarArreglo(a));
    printf ("\nEl promedio del arreglo es: %f", promedioArreglo(a));
    printf ("\nIngrese un elemento para ver si pertenece al arreglo: ");
    scanf ("%d", &pertenece);
    boolean esta = perteneceAlArreglo(a, pertenece);
    if (esta)
        printf ("\n%d pertenece al arreglo", pertenece);
    else
        printf ("\n%d NO pertenece al arreglo", pertenece);
    printf ("\nIngrese un elemento para ver cuantos multiplos contiene el arreglo: ");
    scanf ("%d", &multiplo);
    cantidadMultiplos = multiplosAlArreglo(a, multiplo);
    if (cantidadMultiplos > 0)
        printf ("\nEn el arreglo hay %d multiplo/s de %d", cantidadMultiplos, multiplo);
    else
        printf ("\nEn el arreglo no hay multiplos de %d", multiplo);
    int mayor, posicion;
    mayoryPosicion(a, mayor, posicion);
    printf ("\n El mayor es: %d", mayor);
    printf ("\n Su indice es: %d", posicion);
    invertirArreglo(a, arregloInvertido);
    printf ("\nSe invirtio el arreglo: ");
    printArreglo(arregloInvertido);
    int primer, ultimo;
    primerUltimoElementoArreglo(a, primer, ultimo);
    printf ("\nEl primer elemento del arreglo es %d y el ultimo es %d", primer, ultimo);





}
