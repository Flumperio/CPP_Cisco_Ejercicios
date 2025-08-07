// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
//  3.3.10   LAB   Prime numbers – how do we find them?
// *****************************************
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
	int contador = 2, top = sqrt(num);
	if (num < 2)
		return false;
	while (contador <= top) {
		if (num % contador == 0) {
			return false;
		}
		contador ++;
	}
	return true;
}

int main(void) {
	for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}