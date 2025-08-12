// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
//  3.7.8   LAB   Overloading functions
// *****************************************
#include <iostream>
#include <cstdlib>
#include <ctime>
// #include <stdbool.h>
//#include <bits/random.tcc>

using namespace std;

int main(void) {
	int maxball;
	int ballsno;

	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(nullptr));
	if (ballsno > maxball) {
		cout << " Si no se pueden repetir números, no puede haber menos bolas que el número máximo. Exit" << endl;
		return 1;
	}
	int *tablanum = new int[ballsno];
	int rnd = 0;

	for (int contador = 0; contador < ballsno; contador++) {
		rnd = rand() % maxball + 1;
		bool check_rnd = true;
		for (int cont_1 = 0; cont_1 < contador; cont_1++) {
			if (tablanum[cont_1] == rnd)
				check_rnd = false;
		}
		if (check_rnd)
			tablanum[contador] = rnd;
		else
			contador--;
	}
	for (int contador = 0; contador < ballsno; contador++){
		cout << "Numero " << contador << " : " << tablanum[contador] << endl ;
	}
	delete[] tablanum;
	return 0;
}