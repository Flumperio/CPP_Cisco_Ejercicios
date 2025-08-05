// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 2.8.8   LAB   Two-dimensional square array – symmetric or not?
// *****************************************
#include <iostream>
using namespace std;

struct data_time {
    int horas;
    int minutos;
    int num_minutos;
};

// Funcion para la entrada de un número
int entrada_datos (string Mensaje_Texto) {
    int num_intro;
    cout << Mensaje_Texto;
    cin >> num_intro;
    if ((num_intro < 0) or cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango de numeros permitidos.";
        exit (1);
    }
    return num_intro;
}

int main () {
    string Mensaje_Texto = "";
    data_time tiempo {0, 0, 0};
    tiempo.horas = entrada_datos("Introduce la hora (entre 0 y 23 horas): ");
    tiempo.minutos = entrada_datos("Introduce los minutos (entre 0 y 59 minutos): ");
    if (tiempo.horas > 23 || tiempo.minutos > 59) {
        cout << "No has elegido un rango correcto. Exit";
        exit (1);
    }
    tiempo.num_minutos = entrada_datos("Introduce el tiempo del evento: ");

    for (int contador =  tiempo.num_minutos; contador > 0; contador --) {
        if (tiempo.minutos > 59) {
            tiempo.horas ++;
            tiempo.minutos = 0;
        }
        if (tiempo.horas > 23) {
            tiempo.horas = 0;
        }
        tiempo.minutos ++;
    }
    cout << "La hora final del evento es: " << tiempo.horas << ":" << tiempo.minutos << endl;
}