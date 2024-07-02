#include <iostream>
using namespace std;
#include <iomanip>

//Definicion de un nuevo tipo de tipo enumerador
typedef enum {centimetros = 1, pulgadas, celcius, farenheit, libras, kilogramos } tConversion;

//Prototipos
float centimetros_pulgadas();
float pulgadas_centimetros();
float celcius_farenheit();
float farenheit_celcius();
float libras_kilogramos();
float kilogramos_libras();


int main(){

    tConversion unidad = centimetros;
    int opcion = unidad;

    cout << "Ingrese la opcion de la conversion que desea realizar: " << endl;
    cout << " 1 - Centimetros a Pulgadas " << endl;
    cout << " 2 - Pulgadas a Centimetros " << endl;
    cout << " 3 - Celcius a Farenheit " << endl;
    cout << " 4 - Farenheit a Celcius " << endl;
    cout << " 5 - Libras - Kilogramos " << endl;
    cout << " 6 - Kilogramos a Libras " << endl;
    cout << " Opcion: ";
    cin >> opcion;
    

    while ( opcion <=0 || opcion > 6){
        cout << "Ingrese una opcion valida " << endl;
        cout << "Opcion: ";
        cin >> opcion;
    }

    switch (opcion)
    {
    case 1:
        centimetros_pulgadas();
        break;
    case 2:
        pulgadas_centimetros();
        break;
    case 3:
        celcius_farenheit();
        break;
    case 4:
        farenheit_celcius();        
        break;
    case 5:
        libras_kilogramos();        
        break;
    case 6:
        kilogramos_libras();
        break;
    
    default:
        break;
    }

    return 0;
}

float centimetros_pulgadas(){
    float longitud;
    cout << "Ingrese los Centimetros: ";
    cin >> longitud;
    while (longitud <=0){
        cout << "Ingrese un parametro valido (mayor a cero)" << endl;
        cin >> longitud;
    }
    cout << longitud << " cm es = " << fixed << setprecision(2) << longitud /2.54 << " pulgadas." << endl;
    return longitud;
}
float pulgadas_centimetros(){
    float longitud;
    cout << "Ingrese las Pulgadas: ";
    cin >> longitud;
    while (longitud <=0){
        cout << "Ingrese un parametro valido (mayor a cero)" << endl;
        cin >> longitud;
    }
    cout << fixed << setprecision(2) << longitud << " pulgadas es = " << fixed << setprecision(2) << longitud * 2.54 << " cm." << endl;
    return longitud;
}
float celcius_farenheit(){
    float temp; 
    cout << "Ingrese la Temperatura en Celcius: ";
    cin >> temp;
    cout << fixed << setprecision(2) << temp << " Celcius es = " << fixed << setprecision(2) << (temp * 1.8) + 32 << " grados Farenheit." << endl;
    return temp;
}
float farenheit_celcius(){
    float temp; 
    cout << "Ingrese la Temperatura en farenheit: ";
    cin >> temp;
    cout << fixed << setprecision(2) << temp << " Farenheit es = " << fixed << setprecision(2) << (temp - 32) * 5/9 << " grados Celcius." << endl;
    return temp;
}
float libras_kilogramos(){
    float peso; 
    cout << "Ingrese las Libras: ";
    cin >> peso;
    while (peso <=0){
        cout << "Ingrese un parametro valido (mayor a cero)" << endl;
        cin >> peso;
    }
    cout << fixed << setprecision(2) << peso << " Libras es = " << fixed << setprecision(2) << peso / 2.20462 << " Kilogramos." << endl;
    return peso;
}
float kilogramos_libras(){
    float peso; 
    cout << "Ingrese los Kilogramos: ";
    cin >> peso;
    while (peso <=0){
        cout << "Ingrese un parametro valido (mayor a cero)" << endl;
        cin >> peso;
    }
    cout << fixed << setprecision(2) << peso << " Kilogramos es = " << fixed << setprecision(2) << peso * 2.20462 << " Libras." << endl;
    return peso;
}

