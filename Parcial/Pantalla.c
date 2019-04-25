#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pantalla.h"
#include "funciones2.0.h"

int pan_InicializarArray(Pantalla *arrayPantallas,int tamArray)//1
{
    int i;
    int ret=-1;


    if(arrayPantallas != NULL && tamArray > 0)
    {
        for(i=0;i<tamArray;i++)
        {
            arrayPantallas[i].isEmpty=1;

        }
        ret=0;
    }

    return ret;
}
int pan_BuscarLibre(Pantalla *arrayPantallas,int tamArray)//3.5
{
    int i;
    int ret=-1;

    if(arrayPantallas != NULL && tamArray > 0)
    {
        for(i=0;i<tamArray;i++)
        {
            if(arrayPantallas[i].isEmpty)
            ret = i;
            break;
        }

    }
    return ret;
}

int pan_Alta(Pantalla *arrayPantallas,int tamArray,int id)//3
{
    Pantalla nuevaPantalla;
    int ret=-1;
    int posLibre=pan_BuscarLibre(arrayPantallas, tamArray);
    if(arrayPantallas != NULL && tamArray > 0 )
    {
        if(posLibre !=-1)
        {
            getString(nuevaPantalla.nombre,
                        "Dame el nombre de la pantalla: ",
                        "Error, reingrese el nombre de la pantalla!!",
                        1,
                        29,
                        3);
            getString(nuevaPantalla.direccion,
                        "Dame la direccion de la pantalla:",
                        "Error, reingrese la direccion de la pantalla!!",
                        1,
                        249,
                        3);
            utn_getNumber(&(nuevaPantalla.tipo),
                        "Dame el tipo de pantalla: ",
                        "Error, reingrese el tipo de pantalla!!",
                        1,
                        2,
                        3);
            getString(nuevaPantalla.precio,
                        "Dame el precio de la pantalla: ",
                        "Error, reingrese el precio de la pantalla!!",
                        1,
                        9,
                        3);

            nuevaPantalla.isEmpty=0;
            arrayPantallas[posLibre]=nuevaPantalla;
            ret=0;
        }
        else
        {
            printf("error, no se encontro posicion vacia");
        }
    }


    return ret;
}

int pan_Baja(Pantalla *arrayPantallas,int tamArray)
{
    int ret =-1;


    return ret;
}
