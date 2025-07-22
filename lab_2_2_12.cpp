// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.2.12   LAB   Postcard from Gizah
// *****************************************
#include <iostream>
#include <ostream>
using namespace std;

int main () {
    int     h = 0;
// *****************************************
// ******** Entrada de datos ***************
// *****************************************

    cout << "Introduce el alto de la piramide (más de 2 y menos de 9): ";
    cin >> h;
    if ((h < 2 or h > 9) or cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango de numeros permitidos. Debe ser un número positivo, entre 2 y 9.";
        return 255;
    }

// *****************************************
// ******** Dibujo *************************
// *****************************************

    for (int alto = 0; alto < h; alto ++){
        for (int piramides = 0; piramides < 3; piramides++) {
            for (int blanco = 0; blanco < h - alto; blanco ++){
                cout << " ";
            }
            for (int punto = 0; punto <= (alto * 2); punto ++){
                cout << "*";
                for (; ((punto < (alto * 2) - 1) && alto != h - 1); punto ++){
                    cout << " ";
                }
            }
            for (int blanco = 0; blanco < h - alto; blanco ++){
                cout << " ";
            }
        } 
        cout << endl;
    }

}
