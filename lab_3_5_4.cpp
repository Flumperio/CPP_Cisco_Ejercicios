// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
//  3.3.10   LAB   Prime numbers – how do we find them?
// *****************************************
#include <iostream>

using namespace std;

void increment (int &var, int suma = 1 ) {
	cout << var << " ---- " << suma << endl;
	var = var + suma;
}

int main(void) {
	int var = 0;
	for(int i = 0; i < 10; i++)
		if(i % 2)
			increment(var);
		else
			increment(var,i);
	cout << var << endl;
	return 0;
}