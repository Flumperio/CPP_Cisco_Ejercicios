// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.3.6   LAB   Counting bits (the ones)
// *****************************************
#include <iostream>
#include <ostream>
using namespace std;

// Funcion para ver los 1 y ceros de una variable
int normal_short (unsigned short int numero, int bucle){
    int  is_ones = 0;
    is_ones = ((numero >> bucle) & 1ULL);
    return is_ones;
}
int reverse_short (unsigned short int numero, int bucle){
    int is_ones = 0;
    for (int contador = bucle; contador >= 0; contador--){
        is_ones = (numero & 1);
        numero = numero >> 1;
    }
    return is_ones;
}
int main () {
    unsigned short int num_intro;
    int normal = 0;
    int reverse = 0;
    int num_bits = 0;
    bool is_palindrome = true;
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
    num_bits = (sizeof(num_intro) * 8) - 1;
    for (int contador = num_bits / 2; contador >= 0; contador--){
        normal = normal_short(num_intro, 8 - contador);
        reverse = reverse_short(num_intro, contador);
        cout << "Reverse: " << reverse << " --- Normal: " << normal << endl;
        if (normal != reverse) {
            is_palindrome = false;
//            contador = -1;
        }
    }
    cout << "You number is: " << is_palindrome << endl ;
}
