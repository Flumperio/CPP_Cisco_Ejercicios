// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 3.3.8   LAB   Third step further – counting the days
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

int daysBetween(Date d1, Date d2) {
	int num_dias =  0, contador = d1.year + 1;
	if ((d1.year > d2.year) ||
		(d1.year >= d2.year && d1.month > d2.month) ||
		(d1.year >= d2.year && d1.month >= d2.month && d1.day > d2.day )) {
		return -1;
	}
	if (d1.year == d2.year) {
		return  (dayOfYear(d2) - dayOfYear(d1));
	}
	num_dias = (365 + isLeap(d1.year) - dayOfYear(d1));
	while (contador < d2.year) {
		num_dias += 365 + isLeap(contador);
		contador ++;
	}
	num_dias += dayOfYear(d2);
	return num_dias;
}

int main(void) {

	Date since,to;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> to.year >> to.month >> to.day;
	cout << daysBetween(since,to) << endl;
	return 0;
}
