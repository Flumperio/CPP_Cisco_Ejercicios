// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.2.10   LAB   Finding negative powers of 2
// *****************************************
#include <iomanip>
#include <iostream>
#include <ostream>
using namespace std;

int main () {
    int n = 0; 
    double resultado = 1;

// *****************************************
// ******** Entrada de datos ***************
// *****************************************

    cout << "Introduce el número de exponente: ";
    cin >> n;
    if ((n < 0 or n > 63) or cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango de numeros permitidos. Debe ser un número positivo, entre 0 y 63.";
        return 255;
    }

// *****************************************
// ******** Calculo ******** ***************
// *****************************************
    cout << "Las " << n << " potencias negativas de 2 son: " << endl;
    for (; n != 0; n--) {
        resultado = resultado / 2.0;
    }
    cout.precision(20); 
    cout << resultado << endl;

}
