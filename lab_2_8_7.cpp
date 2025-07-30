// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.8.7   LAB   Evaluating different kinds of means
// *****************************************
#include <iostream>
#include <cmath>

using namespace std;

double arithmetic(double vector[], int tamano) {
    double resultado = 0.;
    for (int contador = 0; contador < tamano; contador ++) {
    resultado += vector[contador];
    }
    resultado /= tamano;
    return resultado;
}

double haromnic (double vector[], int tamano) {
    double resultado = 0.;
    for (int contador = 0; contador < tamano; contador ++) {
        resultado += 1.0 / vector[contador];
    }
    resultado = tamano / resultado;
    return resultado;
}

double geometric (double vector[], int tamano) {
    double resultado = 1.;
    for (int contador = 0; contador < tamano; contador ++) {
        resultado *= vector[contador];
    }
    resultado = pow(resultado, 1.0 / tamano);
    return resultado;
}

double rootmean (double vector[], int tamano) {
    double resultado = 0.;
    for (int contador = 0; contador < tamano; contador ++) {
        resultado += pow(vector[contador],2);
    }
    resultado = sqrt(resultado / tamano);
    return resultado;
}

int main(void) {

    double vector[] = { 1., 2., 3., 4., 5. };
    int n = sizeof(vector) / sizeof(vector[0]);
    double ArithmeticMean = 0.0;
    double HarmonicMean = 0.0;
    double GeometricMean = 0.0;
    double RootMeanSquare = 0.0;

    // Insert your code here
    ArithmeticMean = arithmetic(vector, n);
    HarmonicMean = haromnic(vector, n);
    GeometricMean = geometric(vector, n);
    RootMeanSquare = rootmean(vector, n);
    cout << "Arithmetic Mean = " << ArithmeticMean << endl;
    cout << "Harmonic Mean   = " << HarmonicMean   << endl;
    cout << "Geometric Mean  = " << GeometricMean  << endl;
    cout << "RootMean Square = " << RootMeanSquare << endl;

    cout << endl;
    return 0;
}
