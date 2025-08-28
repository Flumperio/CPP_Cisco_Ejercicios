// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
//  4.4.8   LAB   String in functions: IP numbers
// *****************************************
#include <iostream>
#include <string>

using namespace std;

int n_octetos (const string &direccion_IP) {
	size_t position = 0;
	int n_octetos = 0;
	position = direccion_IP.find('.');
	while (position != string::npos) {
		n_octetos++;
		position += direccion_IP.find(position + 1, '.');
	}
	return n_octetos;
}

int main () {

	string ip_entrada;
	string octetos[3];
	int numero_octetos = 0;
	cout << "Dame la dirección IP completa para comprobarla:  ";
	getline (cin, ip_entrada);
	numero_octetos = n_octetos(ip_entrada);
	cout << numero_octetos << endl;
	return 0;
}