#include "producto.h"

void cargarProducto (Producto &p)
{
    char opcion;
    printf ("\nIngrese nombre del producto: ");
    scan(p.nombre);
    printf ("\nIngrese numero del producto: ");
    scanf ("%ld", &p.numero);
    printf ("\nIngrese precio del producto: ");
    scanf ("%f", &p.precio);
    printf ("\nHay stock (s/n): ");
    fflush (stdin);
    scanf ("%c", &opcion);
    if (opcion == 's' || opcion == 'S')
        p.en_stock = TRUE;
    else
        p.en_stock = FALSE;
    printf ("\nIngrese la fecha de adquisicion: ");
    cargarFecha(p.fecha_adquisicion);
}

void mostrarProducto (Producto p)
{
    printf ("\nDatos del producto ");
    printf("\nNombre: ");
    print(p.nombre);
    printf ("\nNumero: %ld", p.numero);
    printf ("\nPrecio: %f", p.precio);
    if (p.en_stock)
        printf("\nHay stock: Si\n");
    else
        printf ("\nHay stock: No\n");
    mostrarFecha(p.fecha_adquisicion);
}

void getNombreProducto (Producto p, string &nom)
{
    strcop(nom, p.nombre);
}

long int getNumeroProducto (Producto p)
{
    return p.numero;
}

float getPrecioProducto (Producto p)
{
    return p.precio;
}

boolean getStockProducto (Producto p)
{
    return p.en_stock;
}

Fecha getFechaProducto (Producto p)
{
    return p.fecha_adquisicion;
}
