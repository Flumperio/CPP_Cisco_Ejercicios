// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.8.8   LAB   Two-dimensional square array – symmetric or not?
// *****************************************
#include <iostream>

using namespace std;

int main(void) {

    double matrix[][10] = { 	{ 3, 1, 3, 4, 3, 7, 7, 3, 5, 3 },
                    { 1, 1, 2, 5, 7, 6, 7, 7, 5, 5 },
                    { 3, 2, 4, 4, 4, 8, 5, 2, 5, 7 },
                    { 4, 5, 4, 8, 4, 5, 5, 4, 99, 6 },
                    { 3, 7, 4, 4, 9, 4, 3, 7, 3, 7 },
                    { 7, 6, 8, 5, 4, 4, 4, 4, 5, 6 },
                    { 7, 7, 5, 5, 3, 4, 3, 2, 9, 2 },
                    { 3, 7, 2, 4, 7, 4, 2, 1, 7, 4 },
                    { 5, 5, 5, 3, 3, 5, 9, 7, 1, 7 },
                    { 3, 5, 7, 6, 7, 6, 2, 4, 7, 2 }   };

    int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    bool issymmetric = true;
    for (int h_cont = 0; h_cont < side; h_cont ++) {
        for (int v_cont = 0; v_cont < side; v_cont ++) {
            if (matrix[h_cont][v_cont] != matrix[v_cont][h_cont]) {
                issymmetric = false;
            }
            cout << matrix[h_cont][v_cont] << ", ";
        }
        cout << endl;
    }

    if(issymmetric)
        cout << "The matrix is symmetric" << endl;
    else
        cout << "The matrix is not symmetric" << endl;
    return 0;
}
