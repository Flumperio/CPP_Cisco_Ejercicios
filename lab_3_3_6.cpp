// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// Incomplete 3.3.6   LAB   One step further: finding the lengths of months
// *****************************************
#include <iostream>
using namespace std;

bool isLeap(int year) {
	bool is_y_leap = true;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
		is_y_leap = true;
	} else {
		is_y_leap = false;
	}
	return is_y_leap;
}
// Mi primera versión.
// int monthLength(int year, int month) {
// 	int month_31 [] = {1, 3, 5, 7, 8, 10, 12}, contador = 0;
// 	while (contador < 6) {
// 		if (month == month_31[contador]) {
// 			return 31;
// 		}
// 		contador++;
// 	}
// 	if ( month == 2 && isLeap(year) == 1) {
// 		return 29;
// 	} else if (month == 2 && isLeap(year) == 0){
// 		return 28;
// 	}
// 	return 30;
// }

// Mas eficiente
int monthLength(int year, int month) {
	if (month == 2)
		return isLeap(year) ? 29 : 28;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else
		return 31;
}

int main(void) {

	for(int yr = 2000; yr < 2025; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}
