// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 4.3.8   LAB   String manipulation: pangrams
// *****************************************
#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main () {
	map<char, int> mapa_caracteres; // es una variable de tipo map, que almacena ordenadamente pares de valores.
	string string_entrada;
	cout << "Dame la frase para comprobar si es un Panagrama: ";
	getline (cin, string_entrada);
	//For puede funcionar como bucle For-Each, es decir recorrer
	for (auto [ch, cnt]: mapa_caracteres) {
		cout << ch << " - " << cnt << endl;
	}
	return 0;
}