//Profesora, me ví en la necesidad de seguir utilizando un compilador en línea,
// ya que utilizo una laptop Mac, y se me ha hecho muy dificil utilizar VisualStudio.
// Me pide descargar mas de 25 GB en herramientas, además que no viene con las extensiones
// que me piden. Espero no haya inconvenientes.


#include <iostream>

using namespace std;

int main()
{
    int op, resp;
    float precio, priva;
    char n_art[3], nombre[30], descripcion[100], genero[20], clasif[5], consola[20];
    
    cout << "/t ***MENU DE OPCIONES***" << endl;
    cout << "1.- Alta de articulos" << endl << "2.- Mod Articulos" << endl;
    cout << "3.- Baja de articulos" << endl << "4.- Lista de articulos" << endl;
    cout << "5.- Limpiar pantalla" << endl << "6.- SALIR" << endl;
    cin >> op;
    
    switch (op)
    {
        case 1: //Alta de articulos
        cout << "Ingresar numero de articulo" << endl;
        cin >> n_art;
        cout << "Ingresar nombre del articulo" << endl;
        cin >> nombre;
        cout << "Ingrese la descripcion del articulo" << endl;
        cin >> descripcion;
        cout << "Ingresar el genero del articulo" << endl;
        cin >> genero;
        cout << "Ingresar la clasificacion del videojuego" << endl;
        cin >> clasif;
        cout << "Ingrese la consola en la que esta disponible" << endl;
        cin >> consola;
        cout << "Ingrese el precio del videojuego" << endl;
        cin >> precio;
        priva = precio * 1.16;
        cout << "El precio mas IVA es de " << priva << endl;
        cout << "Desea ingresar otro item?   1- SI   2.- NO" << endl;
        cin >> resp;
        if(resp==1)
        {
            return main();
        }
        case 2: //Mod articulos
        
        case 3: //Baja de Articulos
        
        case 4: //Lista de Articulos
        
        case 5: //Limpiar pantalla
        system("cls");
        
        case 6: //Salir 
        exit(1);
        
    }
}
