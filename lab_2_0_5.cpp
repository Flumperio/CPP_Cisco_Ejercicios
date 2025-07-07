// *****************************************
// Created by JCSantos on 6/30/2025.
// Curso Cisco: c++ Essentials 1
// finding day of week
// *****************************************
#include <iostream>
using namespace std;

int main() {
    int year=0, month=1, day=1, week=0;
    string weekday="";
    // ************ Entrada de Datos ***************
    cout << "Vamos a calcular el dia de la semana dada una fecha concreta." << endl << "Anos comprendidos entre 2000 y 2199. Introduce el año: ";
    cin >> year;
    if ((year < 1901 or year > 2199) or cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No esta en el rango permitido";
    }
    cout << "Introduce el mes (Valores entre 1 y 12): ";
    cin >> month;
    if ((month < 1 or month > 12) or cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No esta en el rango permitido";
    }
    cout << "Introduce el día del mes valores entre (1 y 31): ";
    cin >> day;
    if ((day < 1 or day > 31) or cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No esta en el rango permitido";
    }
    // ************ Calculo ***************
    cout << "La fecha introducida es: " << day << "/" << month << "/" << year << endl;

    month -= 2;
    if (month <= 0) {
        month += 12;
        year -= 1;
    }
    week = month * 83 / 32;
    week += day;
    week += year;
    week += year / 4;
    week -= year / 100;
    week += year / 400;
    week =  week % 7;

    switch (week == 0)
        weekday == "Domingo";
    cout << "El día de la semana es: " << week << endl;
}

