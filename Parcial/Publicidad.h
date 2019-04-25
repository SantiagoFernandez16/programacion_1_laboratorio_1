#ifndef PUBLICIDAD_H_INCLUDED
#define PUBLICIDAD_H_INCLUDED
typedef struct
{
    int idPublicidad;
    int isEmpty;
    char cuit[30];
    int dias;
    char archivo[30];
    int idPantalla;
}Publicidad;

int pub_MostrarArray(Publicidad *arrayPublicidades,int tamArray);//2
int pub_OrdenarNombre(Publicidad *arrayPublicidades,int tamArray);
int pub_InicializarArray(Publicidad *arrayPublicidades,int tamArray);//1
int pub_Alta(Publicidad *arrayPublicidades,int tamArray,int id);//3
int pub_Baja(Publicidad *arrayPublicidades,int tamArray);
int pub_BuscarLibre(Publicidad *arrayPublicidades,int tamArray);//3.5
int pub_Modificacion(Publicidad *arrayPublicidades,int tamArray);
int pub_GenerarId();
int pub_buscarPublicidad(Publicidad *arrayPublicidades, int tamArray, char *nombre, char *apellido);

#endif // PUBLICIDAD_H_INCLUDED
