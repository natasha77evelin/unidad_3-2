#include <iostream>
#include <cmath>

using namespace std;

const float SALARIO_1 = 9000.00;
const float SALARIO_2 = 15000.00;
const float SALARIO_3 = 20000.00;
const float AUMENTO_1 = 0.20;
const float AUMENTO_2 = 0.10;
const float AUMENTO_3 = 0.05;
const float AUMENTO_4 = 0.03;

float leerSalario();
float calcularAumento(float salario);

int main(){
  float salario = leerSalario(); //Variable que se asigna al salario elegido
  float aumento = calcularAumento(salario); //Aumento correspondiente
  float nuevoSalario = salario + aumento;

  cout << "Salario original: $" << salario << endl;
  cout << "Aumento: $" << aumento << endl;
  cout << "Nuevo salario: $" << nuevoSalario << endl;

  return 0;
}

float leerSalario(){
  float salario;
  do{
    cout << "Salario actual del trabajador: ";
    cin >> salario;
  } while (salario <= 0);

  return salario;
}

float calcularAumento(float salario) {
  float aumento;

  if (salario <= SALARIO_1){
    aumento = salario * AUMENTO_1;
    }
    else if (salario <= SALARIO_2){
    aumento = salario * AUMENTO_2;
    } 
    else if (salario <= SALARIO_3){
    aumento = salario * AUMENTO_3;
    }
    else{
    aumento = salario * AUMENTO_4;
    }

  return aumento;
}
