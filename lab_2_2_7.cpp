// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.2.7   LAB   Collatz's hypothesis
// *****************************************
#include <iostream>
#include <string>
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
    c_0 = input_Number;
    while (c_0 != 1) {
        c_0 /= 2;
        
    }










}
