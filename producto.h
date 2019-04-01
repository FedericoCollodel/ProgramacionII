#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
#include <stdio.h>
#include "string.h"
#include "fecha.h"
typedef struct
{
    string nombre;
    long int numero;
    float precio;
    boolean en_stock;
    Fecha fecha_adquisicion;
}   Producto;

void cargarProducto (Producto &p);
/*carga un producto por teclado*/
void mostrarProducto (Producto p);
/*muestra un producto en pantalla*/
void getNombreProducto (Producto p, string &nom);
/*selectora de nombre de prodcuto*/
long int getNumeroProducto (Producto p);
/*selectora de numero de producto*/
float getPrecioProducto (Producto p);
/*selectora de precio de producto*/
boolean getStockProducto (Producto p);
/*selectora de stock de producto*/
Fecha getFechaProducto (Producto p);
/*selectora de stock de producto*/
#endif // PRODUCTO_H_INCLUDED
