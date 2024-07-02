/*Programa que lea dos números x e y, luego hacer la diferencia x - y; 
si la diferencia es menor o igual a 10, mostrar los números comprendidos entre y y x*/
#include <iostream>
#include <cmath>

using namespace std;

int leerNumero();
void mostrarRango(int menor, int mayor);

int main() {
  int num_x = leerNumero();
  int num_y = leerNumero();
  int diferencia = abs(num_x - num_y);

  if (diferencia <= 10){
    mostrarRango(num_x, num_y);
    cout << "La diferencia entre ambos numeros: " << diferencia << endl;
  }
  else{
    cout << "El rango entre " << num_x << " y " << num_y << " es superior a 10. Y es: "<< diferencia << endl;
  }

  return 0;
}

int leerNumero(){
  int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

  return numero;
}

void mostrarRango(int menor, int mayor){
    cout << "Los numeros entre " << menor << " y " << mayor << " son: ";
    for (int i = menor; i <= mayor; ++i){
        cout << i;
        if (i < mayor) {
            cout << ", ";
        }
    }
    cout << endl;
}
