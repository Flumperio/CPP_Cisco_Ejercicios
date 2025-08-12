// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
//  3.7.8   LAB   Overloading functions
// *****************************************
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Collection {
	int  elno;
	int *elements;
};

void AddToCollection(Collection &col, int element) {
	int *new_elements;
	if (col.elno == 0) {
		col.elno = 1;
		new_elements = new int[1];
		new_elements[0] = element;
	} else {
		new_elements = new int[col.elno + 1];
		for (int cnt = 0; cnt < col.elno; cnt++) {
			new_elements[cnt] = col.elements[cnt];
		}
		new_elements[col.elno++] = element;
	}
	delete [] col.elements;
	col.elements = new_elements;
}

void PrintCollection(Collection col) {
	cout << "[ ";
	for(int i = 0; i < col.elno; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

int main(void) {
	Collection collection = { 0, NULL };

	int elems;
	cout << "How many elements? ";
	cin >> elems;
	srand(time(NULL));
	for(int i = 0; i < elems; i++)
		AddToCollection(collection, rand() % 100 + 1);
	PrintCollection(collection);
	delete[] collection.elements;
	return 0;
}