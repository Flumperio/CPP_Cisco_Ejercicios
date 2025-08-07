// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 3.3.9   LAB   A foretaste of system programming – obtaining the current date
// *****************************************
#include <iostream>
#include <ctime>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {
	Date resultado{};
	time_t ahora = time(nullptr);
	tm tiempo_local = *localtime(&ahora);
	resultado.year = tiempo_local.tm_year + 1900;
	resultado.month = tiempo_local.tm_mon + 1;
	resultado.day = tiempo_local.tm_mday;
	return resultado;
}

int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}