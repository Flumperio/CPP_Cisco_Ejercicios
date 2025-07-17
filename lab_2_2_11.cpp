// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.2.11   LAB   Drawing squares (actually: rectangles)
// *****************************************
#include <iostream>
#include <ostream>
using namespace std;

int main () {
    int     n = 0;
// *****************************************
// ******** Entrada de datos ***************
// *****************************************

    cout << "Introduce el número ladrillos: ";
    cin >> n;
    if ((n <= 0 or n > 200) or cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango de numeros permitidos. Debe ser un número positivo, entre 1 y 200.";
        return 255;
    }

// *****************************************
// ******** Dibujo *************************
// *****************************************
    for (int alto = 1; alto <= n; alto ++) {
        for (int ancho = 1; ancho <= n * 2; ancho ++){
            if ((alto == 1 || alto == n) && (ancho == 1 || ancho == n * 2)) {
                cout << "+";
            } else if (alto == 1 || alto == n) {
                cout << "-";
            } else if (ancho ==1 || ancho == n * 2) {
                cout << "|";
            } else {
            cout << " ";
            }
        }
        cout << endl;
    }
}
