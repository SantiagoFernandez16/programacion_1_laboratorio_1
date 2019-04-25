#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED
typedef struct
{
    int idPantalla;
    int isEmpty;
    char nombre[30];
    char direccion[250];
    char precio[10];
    int tipo;
}Pantalla;

int pan_MostrarArray(Pantalla *arrayPantallas,int tamArray);//2
int pan_OrdenarNombre(Pantalla *arrayPantallas,int tamArray);
int pan_InicializarArray(Pantalla *arrayPantallas,int tamArray);//1
int pan_Alta(Pantalla *arrayPantallas,int tamArray,int id);//3
int pan_Baja(Pantalla *arrayPantallas,int tamArray);
int pan_BuscarLibre(Pantalla *arrayPantallas,int tamArray);//3.5
int pan_Modificacion(Pantalla *arrayPantallas,int tamArray);
int pan_GenerarId();
int pan_buscarPantalla(Pantalla *arrayPantallas, int tamArray, char *nombre, char *apellido);


#endif // PANTALLA_H_INCLUDED
