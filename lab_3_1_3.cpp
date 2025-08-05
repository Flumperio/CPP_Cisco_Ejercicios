// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 3.1.3   LAB   Vectors and pointers: first try
// *****************************************
#include <iostream>
using namespace std;

int main(void) {

	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]), contador = 0;
	int *puntero = nullptr, max_result = 0;
	puntero = vector;
	while (contador < n) {
		if (max_result < *puntero) {
			max_result = *puntero;
		}
		contador ++, puntero++;
	}
	cout << max_result << endl;
	return 0;
}
