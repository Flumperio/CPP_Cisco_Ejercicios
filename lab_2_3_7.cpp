// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.3.6   LAB   Counting bits (the ones)
// *****************************************
#include <iostream>
#include <ostream>
using namespace std;

// Funcion para ver los 1 y ceros de una variable
int imp_bits (unsigned short int numero){
    int num_bits = (sizeof(numero) * 8) - 1, is_ones = 0, cont_ones = 0;
    for (int contador = num_bits; contador >= 0; contador--){
        is_ones = ((numero >> contador) & 1ULL);
        cout << is_ones;
        if (is_ones == 1){
            cont_ones += 1;
        }
    }
    cout << endl;
    return cont_ones;
}

int main () {
    unsigned short int num_intro;
    bool is_palindrome = false;
// *****************************************
// ******** Entrada de datos ***************
// *****************************************

    cout << "Quieres saber si el núemro introducido es palindromo ?. Introduce un número: ";
    cin >> num_intro;
    if ((num_intro < 0) or cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Error. No está en el rango de numeros permitidos. Debe ser un número positivo entero";
        return 255;
    }

// *****************************************
// ******** Calculo ************************
// *****************************************
    num_intro = imp_bits(num_intro);
}
