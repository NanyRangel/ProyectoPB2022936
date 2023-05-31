#include <iostream>
#include <wchar.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

struct tienda
{
    float precio, priva;
    char n_art[5], nombre[30], descripcion[100], genero[20], clasif[5], consola[20];
};

int main()
{
    tienda articulos[3];
    int op;

    printf("/t ***MENU DE OPCIONES*** \n");
    printf("1.- Alta de articulos \n 2.- Mod Articulos \n");
    printf("3.- Baja de articulos \n 4.- Lista de articulos \n");
    printf("5.- Limpiar pantalla \n 6.- SALIR \n");
    scanf_s("%d", &op);

    do
    {
        switch (op)
        {
        case 1: //Alta de articulos
            for (int i = 0; i < 3; i++)
            {
                printf("Ingresar numero de articulo \n");
                cin.ignore();
                gets_s(articulos[i].n_art);
                printf("Ingresar nombre del articulo \n");
                gets_s(articulos[i].nombre);
                printf("Ingrese la descripcion del articulo \n");
                gets_s(articulos[i].descripcion);
                printf("Ingresar el genero del articulo \n");
                gets_s(articulos[i].genero);
                printf("Ingresar la clasificacion del videojuego \n");
                gets_s(articulos[i].clasif);
                printf("Ingrese la consola en la que esta disponible \n");
                gets_s(articulos[i].consola);
                printf("Ingrese el precio del videojuego \n");
                scanf_s("%f", &articulos[i].precio);
                articulos[i].priva = articulos[i].precio * 1.16;
                printf("El precio mas IVA es de %f \n", articulos[i].priva);
            }

        case 2: //Mod articulos

        case 3: //Baja de Articulos

        case 4: //Lista de Articulos
            for (int i = 0; i < 3; i++)
            {
                printf("Numero de articulo: %s \n", articulos[i].n_art);
                printf("Nombre del articulo: %s \n", articulos[i].nombre);
                printf("Descripcion del articulo: %s \n", articulos[i].descripcion);
                printf("Genero del articulo: %s \n", articulos[i].genero);
                printf("Clasificacion del videojuego: %s \n", articulos[i].clasif);
                printf("Consolas en las que esta dosponible: %s \n", articulos[i].consola);
                printf("Precio: %f \n", articulos[i].precio);
                printf("Precio final (mas IVA): %f \n", articulos[i].priva);
            }

        case 5: //Limpiar pantalla
            system("cls");

        case 6: //Salir 
            exit(1);

        }
    } while (op != 6);
}
