//Programa que tome pedidos
#include <iostream>
using namespace std;

void clearConsole(); //Para limpiar la consola
int menuProductos();
int cantidad_producto();
int menuEnvios();
void mostrar(int producto, int cantidad, int envio);


int main (){

    int producto, cantidad, envio;
    
    producto = menuProductos();
    cantidad = cantidad_producto();
    envio = menuEnvios();// Se guarda el valor de retorno de menuEnvios
    mostrar(producto, cantidad, envio);// Se pasa el valor de envio como argumento


    return 0;
}

void clearConsole()
{
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN32) || defined(WIN64)
        system("cls");
    #endif
}

int menuProductos(){

    int opcion;
    //Preguntar que desea

    do {
        clearConsole();

        cout << "Ingrese la opcion de su pedido" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "1 - Simple" << endl;
        cout << "2 - Medio" << endl;
        cout << "3 - Calidad" << endl;
        cout << "4 - Premium" << endl;
        cout << "Opcion: ";
        cin >> opcion;

    } while (opcion < 1 || opcion > 4);

    return opcion;
}
int cantidad_producto(){
    int cantidad;
    
    do{
        clearConsole();

        cout << "Ingrese la cantidad de productos" << endl;
        cin >> cantidad;
        
    } while (cantidad <= 0);
    
    return cantidad;
}

int menuEnvios(){
    int envio;

    do {
        clearConsole();

        cout << "Seleccione el tipo de Envio" << endl;
        cout << "------------------------" << endl;
        cout << "1 - Normal" << endl;
        cout << "2 - Express" << endl;
        cout << "3 - Fast Delivery" << endl;
        cout << "Opcion: ";
        cin >> envio;

    } while (envio < 1 || envio > 3);
    return envio;
}

void mostrar(int producto, int cantidad, int envio){

    clearConsole();

    cout << "Usted ha seleccionado: " << cantidad << " unidades" << endl;
    cout << "De Producto ";
    
    switch (producto)
        {
            case 1:{
            cout << "Simple ";
            }   break;
            case 2:{
            cout << "Medio ";
            }   break;
            case 3:{
            cout << "Calidad ";
            }   break;
            case 4:{
            cout << "Premium ";
            }   break;
        }
    
    cout << endl;

    cout << "Tipo de en envio: ";
    switch (envio)
        {
            case 1:{
            cout << "Normal ";
            }   break;
            case 2:{
            cout << "Express ";
            }   break;
            case 3:{
            cout << "Fast Delivery ";
            }   break;
            default:
               break;
        }
}
