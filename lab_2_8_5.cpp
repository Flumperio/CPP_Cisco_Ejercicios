// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.3.6   LAB   Counting bits (the ones)
// *****************************************
#include <iostream>
#include <ostream>
using namespace std;

// Funcion para la entrada de un número
int entrada_datos (string Mensaje_Texto) {
    int num_intro;
    cout << Mensaje_Texto;
    cin >> num_intro;
    if ((num_intro < 0) or cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango de numeros permitidos. Debe ser un número positivo entero";
        exit (1);
    }
    return num_intro;
}
// Para conocer el final de un array podemos hacerlo de dos maneras, 
// Creamos un array con valor y le sumamos uno para que el último valor siempre sea cero
// Usar una variale en inicializarla con sizeof(zzz)/sizeof(zzz[])
//
int main () {
    int billetes [6] = {50, 20, 10, 5, 1};
    int cantidad = 0, contador = 0, size_of_array = 0;
    cantidad = entrada_datos("\nIntroduce la cantidad de dinero que deseada: ");
    size_of_array =  sizeof(billetes) / sizeof(billetes[0]);
while (cantidad !=0 && contador < 6){
        if (cantidad - billetes[contador] >= 0){
            cout << billetes[contador] << " ";
            cantidad -= billetes[contador];
        } else {
            contador ++;
        }
    }
}

