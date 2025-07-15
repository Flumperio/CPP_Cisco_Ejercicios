// *****************************************
// Created by JCSantos on 7/07/2025.
// Curso Cisco: c++ Essentials 1
// Finding date od Easter
// *****************************************
#include <iostream>
#include <string>
using namespace std;

int main() {
    int year = 1901, day = 1;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    string month = "";
//
// ********* Entrada de datos ***********
//  
    cout << "Vamos a calcular el día de Pascua. Por favor introduce el año que quieras conocer la fecha (1901 - 2199): ";
    cin >> year;
    if ((year < 1901 or year > 2199) or cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango de fechas permitidas";
        return 255;
    }
//
// ********* Calulo ***********
//  
    a = year % 19;
    b = year % 4;
    c = year % 7;
    d = ((a * 19) + 24) % 30;
    e = ((2 * b) + (4 * c) + (6 * d) + 5) % 7;
//
// ********* Resultado ***********
//  
    cout << "El día de Pascua es: ";
    if ((d + e) < 10) {
        day = d + e + 22;
        month = "Marzo";
    } else {
        day = (d + e - 9);
        month = "Abril";
    }
    cout << day << " de " << month << endl;
}

