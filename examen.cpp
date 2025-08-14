// *****************************************
// Created by JCSantos on 8/13/2025.
// Curso Cisco: c++ Essentials 1
// *****************************************
#include <iostream>
using namespace std;

int ex_1() {
	int t[3] = { 3, 2, 1 }, *ptr = t + 1;
	(*(ptr + 1))++;
	*ptr++;
	cout << t[1] << t[2];
	return 0;
}

int ex_2() {
	float x = 3.14, *p = &x;
	p[0] = ++x;
	cout << x;
	return 0;
}

int ex_3() {
	int tab[5] = { 1, 2, 4, 8, 16 };
	int *p1 = tab, *p2 = tab + 4;
	for(int *p = p1 + 1; p < p2; p++)
		*p = p[-1] * 2;
	cout << tab[1] << tab[2];
	return 0;
}

int ex_4() {
	float f[2];
	float *p1 = f, *p2 = p1 + 1;
	cout << (p2 - p1) / sizeof(float);
	return 0;
}



int main (){
	ex_1();
	cout << endl << "----------------------------------------------------------" << endl;
	ex_2();
	cout << endl << "----------------------------------------------------------" << endl;
	ex_3();
	cout << endl << "----------------------------------------------------------" << endl;
	ex_4();
	return 0;
}

