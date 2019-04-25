#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED

typedef struct
{
    char nombre[50];
    char direccion[250];
    float precio;
    int tipo;
    int isEmpty; ///1vacio - 0ocupado
    int idPantalla; ///clave unica de identidad univoca
}Pantalla;

int pan_inicializarArray(Pantalla* pPantalla,int len);
int pan_mostrarArray(Pantalla* pPantalla,int len);

int pan_alta(Pantalla* pPantalla,int len,int pIndex,int idE,char* msgE);
int pan_modifyFromID(Pantalla* pPantalla, int len,char* msgE);
int pan_bajaLogica(Pantalla* pPantalla, int len,char* msgE);

int pan_orderByPrice(Pantalla* pPantalla, int len);
int pan_orderByID(Pantalla* pPantalla, int len);

int pan_findID(Pantalla* pPantalla, int len, int idE);
int pan_posLibre(Pantalla* pPantalla, int len);
#endif // PANTALLA_H_INCLUDED
