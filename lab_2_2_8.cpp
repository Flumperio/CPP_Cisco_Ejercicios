// *****************************************
// Created by JCSantos on 15/07/2025.
// Curso Cisco: c++ Essentials 1
//  2.2.8   LAB   Some actual evaluations – finding the value of π
// *****************************************
#include <iostream>
#include <ostream>
using namespace std;

int main(void) {
	double  pi4 = 0.;
	long    n;
    long    dividendo = 1;
    long    par = 2;

	cout << "Number of iterations? ";
	cin >> n;

    for (; n != 0; n--) {
        if (par % 2 == 0){
            pi4 = pi4 + (1.0 / dividendo);
        } 
        else {
            pi4 = pi4 - (1.0 / dividendo);
        }
        cout << n << endl;
        dividendo += 2;
        par ++;

    }

	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}
