// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
//  4.4.8   LAB   String in functions: IP numbers
// *****************************************
#include <cctype>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int n_octetos (const string &direccion_IP) {
	int count = 0;
	size_t position = direccion_IP.find('.');
	while (position != string::npos) {
		count++;
		position = direccion_IP.find('.', position + 1);
	}
	return count;
}

bool check_octetos (const string &direccion_IP) {
    for (char c : direccion_IP){
        if (!isdigit(c) && c != '.')
            return false;
    }
	return true;
}

bool check_numbers (const string &direccion_IP){
    string octeto = direccion_IP.substr(0 , direccion_IP.find('.'));
	string ip_rest = direccion_IP.substr(direccion_IP.find('.')+1);
	size_t position = 0;
    for (int contador = 0; contador < 4; contador ++) {
	    if (atoi(octeto.c_str()) > 255)
	    	return false;
    	octeto = ip_rest.substr(0 , ip_rest.find('.'));
    	ip_rest = ip_rest.substr(ip_rest.find('.')+1);
    }
    return true;
}
int main () {
	string ip_entrada;
	string octetos[3];
	int numero_octetos = 0;
		cout << "Dame la dirección IP completa para comprobarla:  ";
		getline (cin, ip_entrada);
		if ((numero_octetos = n_octetos(ip_entrada)) !=3)
			cout << "Numero de octetos erróneo - el formato es xxx.xxx.xxx.xxx" << endl;
		else if (!check_octetos (ip_entrada))
			cout << "Solo se permiten números separados por puntos" << endl;
		else if (!check_numbers (ip_entrada))
			cout << "Los números permitidos están entre 0 y 255." << endl;
		else
			cout << "La dirección IP: " << ip_entrada << " es correcta." << endl;
	return 0;
}
