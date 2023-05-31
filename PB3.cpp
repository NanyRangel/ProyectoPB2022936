#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
//#include <math.h>
//#include <string.h>
//#include <wchar.h>
//#include <stdlib.h>
//#include <conio.h>

using namespace std;

struct Tienda
{
    int n_art, clasif, a–o;
    string nombre, descripcion, genero, consola, estado;
    float precio, impuesto, priva;
};

int alta;

Tienda* articulos;

void Alta();
void Modificar();
void Baja();
void Lista();
void archivos();

int main()
{
    int opc;
    printf("\n\t %c%c MENU DE OPCIONES %c%c \n1.-Alta de articulos \n2.-Modificar articulos \n", 174, 174, 175, 175);
    printf("3.-Baja de articulos \n4.-Lista de articulos \n5.-Limpiar pantalla \n");
    printf("6.-SALIR \n");
    scanf_s("%d", &opc);

    switch (opc)
    {
    case 1:
        Alta();
        return main();
        break;

    case 2:
        Modificar();
        return main();
        break;

    case 3:
        Baja();
        return main();
        break;

    case 4:
        Lista();
        return main();
        break;

    case 5:
        system("cls");
        return main();
        break;

    case 6:
        archivos();
        break;
    }
    return 0;
}

void Alta()
{
    printf("%cCuantos registros desea dar de alta? \n", 168);
    scanf_s("%d", &alta);
    cin.ignore();

    articulos = new Tienda[alta];

    for (int i = 0; i < alta; i++)
    {
	  bool repetido;

        do
	  {
	   	repetido = false;

	  	printf("Ingrese el numero de articulo \n");
        	scanf_s("%d", &articulos[i].n_art);
        	cin.ignore();
		
		for (int j = 0; j < i; j++)
		{
			if(articulos[i].n_art == articulos[j].n_art)
			{
				repetido = true;
				break;
			}
      		}

		if(repetido)
		{
			printf("El numero que ingreso ya esta registrado \n");
			printf("Ingrese otro numero \n");
		}
	  }
	  while (repetido);
	  
	  bool rep;
		
	  do
	  {
		rep = false;
	
	  	printf("Ingrese el a%co de lanzamiento \n", 164);
	  	scanf_s("%d", &articulos[i].a–o);
		cin.ignore();

		if(articulos[i].a–o <= 2020 && articulos[i].a–o >= 1960)
		{
			rep = true;
			break;
		}

	  	if(rep)
	  	{
			printf("El a%co esta fuera de rango \n", 164);
			printf("Ingrese el a–o correcto \n");
   	  	}
	  }
	  while(rep);

        printf("Ingrese el nombre del articulo \n");
        getline(cin, articulos[i].nombre);

        printf("Ingrese la descripcion del articulo \n");
        getline(cin, articulos[i].descripcion);

        printf("Ingrese el genero del articulo \n");
        getline(cin, articulos[i].genero);

        printf("Ingrese la clasificacion del articulo \n");
        scanf_s("%d", &articulos[i].clasif);
        cin.ignore();

        printf("Ingrese la o las consolas compatibles \n");
        getline(cin, articulos[i].consola);

        printf("Ingrese el precio del articulo \n");
        scanf_s("%f", &articulos[i].precio);
        cin.ignore();

        articulos[i].priva = articulos[i].precio * 1.16;
	
        articulos[i].impuesto = articulos[i].priva - articulos[i].precio;
    }
}

void Modificar()
{
    int j, opcion, op2;
    do
    {
        printf("Ingrese el numero de registro que desea modificar \n");
        scanf_s("%d", &j);
        j = j - 1;
        for (int i = 0; i == j; i++)
        {
            if (articulos[i].estado == "ELIMINADO")
            {
                printf("REGISTRO ELIMINADO %d", i + 1);
                printf("Ingrese un registro valido \n");
                op2 = 1;
            }
            else
            {
                op2 = 2;
            }
        }
    } while (op2 == 1);

    printf("%cQue desea modificar? \n1.-Numero de articulo \n2.-A%co \n3.-Nombre \n", 168, 164);
    printf("4.-Descripcion \n5.-Genero \n6.-Clasificacion \n7.-Consola \n8.-Precio \n");
    scanf_s("%d", &opcion);

    switch (opcion)
    {
    case 1: //Numero de articulo
        for (int i = 0; i < alta; i++)
    	{
	  bool repetido;

        	  do
	  {
		repetido = false;

	  	printf("Ingrese el numero de articulo \n");
        		scanf_s("%d", &articulos[i].n_art);
        		cin.ignore();
		
		for (int j = 0; j < i; j++)
		{
			if(articulos[i].n_art == articulos[j].n_art)
			{
				repetido = true;
				break;
			}
      		}
		if(repetido)
		{
			printf("El numero que ingreso ya esta registrado \n");
			printf("Ingrese otro numero \n");
		}
	    }
	    while (repetido);
	}
        	break;

    case 2: //A–o de lanzamiento
	for(int i = j; i == j; i++)
	{
	  bool rep;
		
	  do
	  {
		rep = false;
	
	  	printf("Ingrese el a%co de lanzamiento \n", 164);
	  	scanf_s("%d", &articulos[i].a–o);
		cin.ignore();

		if(articulos[i].a–o <= 2020 && articulos[i].a–o >= 1960)
		{
			rep = true;
			break;
		}

	  	if(rep)
	  	{
			printf("El a%co esta fuera de rango \n", 164);
			printf("Ingrese el a–o correcto \n");
   	  	}
	  }
	  while(rep);
	}
	break;

    case 3: //Nombre
        for (int i = j; i == j; i++)
        {
            //while (getchar() != '\n');
            cin.ignore();
            printf("Ingrese el nombre del articulo \n");
            getline(cin, articulos[i].nombre);
        }
        break;

    case 4: //descripcion
        for (int i = j; i == j; i++)
        {
            //while (getchar() != '\n');
            cin.ignore();
            printf("Ingrese la descripcion del articulo \n");
            getline(cin, articulos[i].descripcion);
        }
        break;

    case 5: //Genero
        for (int i = j; i == j; i++)
        {
            //while (getchar() != '\n');
            cin.ignore();
            printf("Ingrese el genero del articulo \n");
            getline(cin, articulos[i].genero);
        }
        break;

    case 6: //Clasificacion
        for (int i = j; i == j; i++)
        {
            printf("Ingrese la clasificacion del articulo \n");
            scanf_s("%d", &articulos[i].clasif);
        }
        break;

    case 7: //consola
        for (int i = j; i == j; i++)
        {
            //while (getchar() != '\n');
            cin.ignore();
            printf("Ingrese la o las consolas con las que el articulo es compatible \n");
            getline(cin, articulos[i].consola);
        }
        break;

    case 8: //Precio
        for (int i = j; i == j; i++)
        {
            	printf("Ingrese el precio del articulo \n");
            	scanf_s("%f", &articulos[i].precio);
            	articulos[i].priva = articulos[i].precio * 1.16;
	    	articulos[i].impuesto = articulos[i].priva - articulos[i].precio;
        }
        break;
    }
}

void Baja()
{
    int j;
    printf("Ingres el numero de registro del articulo que desea dar de baja \n");
    scanf_s("%d", &j);
    j = j - 1;

    for (int i = j; i == j; i++)
    {
        printf("Eliminando registro %d... \n", j + 1));
        articulos[j].estado = "ELIMINADO";
    }
}

void Lista()
{
   int decision, des;
   printf("%cDesea ver todo los registros o aplicar filtro?\n1.-Todo\n2.-Aplicar filtro", 168);
   scanf_s("%d", &decision);
   if(decision == 1)
   {
    for (int i = 0; i < alta; i++)
    {
        if (articulos[i].estado == "ELIMINADO")
        {
            printf("REGISTRO ELIMINADO %d \n", i + 1);
        }
        else
        {
           	printf("Registro %d \n", i + 1);
           	printf("\tNumero de articulo: %d \n", articulos[i].n_art);
	    	printf("\tA–o de lanzamiento: %d \n", articulos[i].a–o);
           	printf("\tNombre: %s \n", articulos[i].nombre.c_str());
           	printf("\tDescripcion: %s \n", articulos[i].descripcion.c_str());
           	printf("\tGenero: %s \n", articulos[i].genero.c_str());
           	printf("\tClasificacion: %d \n", articulos[i].clasif.c_str());
           	printf("\tConsolas: %s \n", articulos[i].consola.c_str());
           	printf("\tPrecio: %f \n", articulos[i].precio);
	    	printf("\tImpuesto: %f \n", articulos[i].impuesto);
           	printf("\tPrecio total: %f \n", articulos[i].priva);
        }
     }
   }
   else
   {
	printf("%cQue filtro desea aplicar?", 168);
	printf("1.-GŽnero \n2.-Clasificacion");
	scanf_s("%d", &des);
	
	switch(des)
	{
		case 1: //Filtro de genero
			int i;
			printf("Ingresar el genero \n");
			getline(cin, articulos[i].genero.c_str());
			
			for(int j = 0; j < alta; j++)
			{
				if(articulos[i].genero == articulos[j].genero)
				{
					printf("Registro %d \n", j + 1);
           				printf("\tNumero de articulo: %d \n", articulos[j].n_art);
	    				printf("\tA–o de lanzamiento: %d \n", articulos[j].a–o);
           				printf("\tNombre: %s \n", articulos[j].nombre.c_str());
           				printf("\tDescripcion: %s \n", articulos[j].descripcion.c_str());
           				printf("\tGenero: %s \n", articulos[j].genero.c_str());
           				printf("\tClasificacion: %d \n", articulos[j].clasif.c_str());
           				printf("\tConsolas: %s \n", articulos[j].consola.c_str());
           				printf("\tPrecio: %f \n", articulos[j].precio);
	    				printf("\tImpuesto: %f \n", articulos[j].impuesto);
           				printf("\tPrecio total: %f \n", articulos[j].priva);
				}
			}
			break;
		
		case 2: //Filtro de clasificacion
			int i;
			printf("Ingresar la clasificaci—n \n");
			scanf_s("%d", &articulos[i].clasif);
			
			for(int j = 0; j < alta; j++)
			{
				if(articulos[i].clasif == articulos[j].clasif)
				{
					printf("Registro %d \n", j + 1);
           				printf("\tNumero de articulo: %d \n", articulos[j].n_art);
	    				printf("\tA–o de lanzamiento: %d \n", articulos[j].a–o);
           				printf("\tNombre: %s \n", articulos[j].nombre.c_str());
           				printf("\tDescripcion: %s \n", articulos[j].descripcion.c_str());
           				printf("\tGenero: %s \n", articulos[j].genero.c_str());
           				printf("\tClasificacion: %d \n", articulos[j].clasif);
           				printf("\tConsolas: %s \n", articulos[j].consola.c_str());
           				printf("\tPrecio: %f \n", articulos[j].precio);
	    				printf("\tImpuesto: %f \n", articulos[j].impuesto);
           				printf("\tPrecio total: %f \n", articulos[j].priva);
				}
			}
			break;
	}
   }
}

void archivos()
{
    ofstream archivo;
    string nombrearchivo;
    float texto;
    string texto2;

    nombrearchivo = "TiendaArticulos.txt";

    archivo.open(nombrearchivo.c_str(), std::ios::out);

    if (archivo.fail())
    {
        printf("ERROR, NO SE PUDO CREAR EL ARCHIVO \n");
        exit(1);
    }

    archivo << "Num. Articulo" << "\t";
    archivo << "A–o de lanzamiento" << "\t";
    archivo << "Nombre del articulo" << "\t";
    archivo << "Descripcion del articulo" << "\t";
    archivo << "Genero del articulo" << "\t";
    archivo << "Clasificacion del articulo" << "\t";
    archivo << "Consolas compatibles" << "\t";
    archivo << "Precio del articulo" << "\t";
    archivo << "Impuesto" << "\t";
    archivo << "Precio total" << "\t" << "\n";

    for (int i = 0; i < alta; i++)
    {
        if (articulos[i].estado == "ELIMINADO")
        {
            texto2 = "REGISTRO ELIMINADO ";
            texto = i;
            archivo << texto2 << texto << "\n";
        }
        else
        {
            texto = articulos[i].n_art;
            archivo << texto << "\t";
	    texto = articulos[i].a–o;
	    archivo << texto << "\t";
            texto2 = articulos[i].nombre;
            archivo << texto2 << "\t";
            texto2 = articulos[i].descripcion;
            archivo << texto2 << "\t";
            texto2 = articulos[i].genero;
            archivo << texto2 << "\t";
            texto = articulos[i].clasif;
            archivo << texto << "\t";
            texto2 = articulos[i].consola;
            archivo << texto2 << "\t";
            texto = articulos[i].precio;
            archivo << texto << "\t";
	    texto = articulos[i].impuesto;
	    archivo << texto << "\t";
            texto = articulos[i].priva;
            archivo << texto << "\n";
        }

    }

    archivo.close();

    printf("El archivo se creo exitosamente \n");
}