#include <stdio.h>
#include "boolean.h"

void cargar (boolean &b)
{
    char c;
    printf ("Ingrese T para TRUE o F para FALSE: ");
    fflush (stdin);
    scanf ("%c", &c);
    if (c == 'T')
        b = TRUE;
    else
        b = FALSE;
}

void mostrar (boolean b)
{
    if (b)
        printf ("TRUE");
    else
        printf ("FALSE");
}
