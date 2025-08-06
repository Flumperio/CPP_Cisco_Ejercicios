// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 3.3.5   LAB   Old problems, new methods: functions
// *****************************************
#include <iostream>
using namespace std;

bool is_leap (int year) {
	bool is_y_leap = true;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
		is_y_leap = true;
	} else {
		is_y_leap = false;
	}
	return is_y_leap;
}
int main() {
	int year = 1969;
	while (year < 2025) {
		cout << year << " -> " << is_leap(year) << endl;
		year ++;
	}
 	return 0;
}