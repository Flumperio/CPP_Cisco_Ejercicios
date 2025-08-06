// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 3.3.7   LAB   Second step further: finding day of year
// *****************************************
#include <iostream>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int year) {
	bool is_y_leap;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
		is_y_leap = true;
	} else {
		is_y_leap = false;
	}
	return is_y_leap;
}

int monthLength(int year, int month) {
	if (month == 2)
		return isLeap(year) ? 29 : 28;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else
		return 31;
}

int dayOfYear(Date date) {
	int num_dias = 0, contador = 1;
		while (contador < date.month) {
			num_dias += monthLength(date.year, contador);
			contador ++;
		}
	num_dias += date.day;
	return num_dias;
}

int main(void) {
	Date d;
	cout << "Enter year, month, day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}
