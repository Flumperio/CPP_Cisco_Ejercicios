// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.2.7   LAB   Collatz's hypothesis
// *****************************************
#include <iostream>
#include <ostream>
using namespace std;

int main () {
    int c_0 = 0, input_Number = 0, contador = 0;

// *****************************************
// ******** Entrada de datos ***************
// *****************************************

    cout << "Introduce un número para comprobar la hipotesis de Collatz: ";
    cin >> input_Number;
    if ((input_Number <= 0) or cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango de numeros permitidos. Debe ser un número positivo y que no sea cero.";
        return 255;
    }

// *****************************************
// ******** Calculo ******** ***************
// *****************************************
    cout << "El número " << input_Number << endl;
    
    c_0 = input_Number;
    while (c_0 != 1) {
        if (c_0 % 2 == 0) {
        c_0 /= 2;
        } 
        else {
        c_0 = 3 * c_0 + 1;
        }
        contador += 1;
        cout << "Paso: " << contador << " valor de c_0: " << c_0 << endl;
    }
    cout << "Total de pasos: " << contador << endl;
}
