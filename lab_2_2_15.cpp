// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.2.15   LAB   The riddle (a bit of a tricky one)
// *****************************************
#include <iostream>
#include <ostream>
using namespace std;

int main () {
    unsigned long long n = 0, resultado = 1;
// *****************************************
// ******** Entrada de datos ***************
// *****************************************

    cout << "Vamos a calcular el número de Fibonacci. Introduce un número: ";
    cin >> n;
    if ((n < 0) or cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango de numeros permitidos. Debe ser un número positivo entero";
        return 255;
    }

// *****************************************
// ******** Calculo ************************
// *****************************************
    resultado = n - 1;
    resultado *= resultado;
    resultado += 1;

    cout << resultado;
}
