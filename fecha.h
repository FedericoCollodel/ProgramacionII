#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <stdio.h>
#include "boolean.h"
typedef struct
    {
        int dia;
        int mes;
        int anio;
    } Fecha;

void cargarFecha (Fecha &f);
/*carga una fecha desde teclado*/
void mostrarFecha (Fecha f);
/*muestra fecha por pantalle*/
int getDia (Fecha f);
/*selectora del dia*/
int getMes (Fecha f);
/*selectora del mes*/
int getAnio (Fecha f);
/*selectora del anio*/
boolean esValidaFecha (Fecha f);
/*determina si la fecha es valida*/


#endif // FECHA_H_INCLUDED
