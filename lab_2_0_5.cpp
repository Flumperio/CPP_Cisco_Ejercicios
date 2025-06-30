// *****************************************
// Created by JCSantos on 6/30/2025.
// Curso Cisco: c++ Essentials 1
// finding day of week
// *****************************************
#include <iostream>
using namespace std;

int main() {
    int year=0, month=1, day=1;
    // ************ Entrada de Datos ***************
    cout << "Vamos a calcular el día de la semana dada una fecha concreta." << endl << "Años comprendidos entre 2000 y 2199. Introduce el año: ";
    cin >> year;
    if ((year < 2000 or year > 2199) or cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango permitido";
    }
    cout << "Intoduce el mes (Valores entre 1 y 12): ";
    cin >> month;
    if ((month < 1 or month > 12) or cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango permitido";
    }
    cout << "Introduce el día del mes valores entre (1 y 31): ";
    cin >> day;
    if ((day < 1 or day > 31) or cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango permitido";
    }
    // ************ Calculo ***************
    cout << "La fecha introducida es: " << day << "/" << month << "/" << year << endl;

}

