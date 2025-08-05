// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 3.1.4   LAB   Matrices and pointers – a step inside
// *****************************************
#include <iostream>
using namespace std;

int main(void) {

	int matrix[10][10] = { };

	// Insert your code here

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}