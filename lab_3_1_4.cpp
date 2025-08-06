// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 3.1.4   LAB   Matrices and pointers – a step inside
// *****************************************
#include <iostream>
using namespace std;

int main(void) {

	int matrix[10][10] = { };
	int *puntero = nullptr, x = 1, y = 1;
	//puntero = &matrix[0][0]; valen los dos casos.
	puntero = *matrix;

	while (x <= 10) {
		while (y <= 10) {
			cout.width(4);
			*puntero = x*y;
			puntero ++, y++;
		}
		y = 1, x++;
	}
 	for(int i = 0; i < 10; i++) {
 		for(int j = 0; j < 10; j++) {
 			cout.width(4);
 			cout << matrix[i][j];
 		}
 		cout << endl;
 	}
 	return 0;
}