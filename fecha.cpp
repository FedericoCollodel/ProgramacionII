#include <stdio.h>
#include "fecha.h"

void cargarFecha (Fecha &f)
{
    printf ("Ingrese dia, mes y anio: ");
    scanf ("%d%d%d", &f.dia, &f.mes, &f.anio);
}

void mostrarFecha (Fecha f)
{
    printf ("%d/%d/%d", f.dia, f.mes, f.anio);
}

int getDia (Fecha f)
{
    return f.dia;
}

int getMes (Fecha f)
{
    return f.mes;
}

int getAnio (Fecha f)
{
    return f.anio;
}

boolean esValidaFecha (Fecha f)
{
    boolean es = FALSE;
    switch (f.mes)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (f.dia >= 1 && f.dia <= 31)
                es = TRUE;
            break;
        case 4: case 6: case 9: case 11:
            if (f.dia >= 1 && f.dia <=30)
                es = TRUE;
            break;
        case 2:
            if (f.anio % 4 == 0)
            {
                if (f.dia >= 1 && f.dia <= 29)
                    es = TRUE;
            }
            else
            {
                if (f.dia >= 1 && f.dia <= 28)
                    es = TRUE;
            }
            break;
    }
    return es;

}
