#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLUDED
#include "boolean.h"

const int TAM = 4;
typedef int arreglo [TAM];

void cargarArreglo (arreglo &a);
/*carga el arreglo por teclado*/
int sumarArreglo (arreglo a);
/*suma elementos de un arreglo*/
float promedioArreglo (arreglo a);
/*promedio de los elementos del arreglo*/
void printArreglo (arreglo a);
/*muestra el arreglo por pantalla*/
boolean perteneceAlArreglo (arreglo a, int elem);
/*dado un entero determina si pertenece o no al arreglo.*/
int multiplosAlArreglo (arreglo a, int enteroDado);
/*dado un entero positivo contar cuántos múltiplos de ese entero*/
/*hay en el arreglo. Precondición: el entero ingresado es positivo*/
void mayoryPosicion (arreglo a, int &mayor, int &posicion);
/* buscar el elemento mayor del arreglo y su posición */
void invertirArreglo(arreglo A, arreglo &arrinvertido);
/* dado un arreglo devolver otro con los valores invertidos */
void primerUltimoElementoArreglo (arreglo a, int &primer, int &ultimo);
/* devolver el primer y el último elemento del arreglo */
#endif // ARREGLO_H_INCLUDED

