// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 4.0.3   LAB   Multi-dimensional arrays of variable length
// *****************************************
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct avgr {
	int n_asignaturas;
	int n_notas;
	int **puntuacion;
};

int entrada_datos (string Mensaje_Texto) {
	int num_intro;
	cout << Mensaje_Texto;
	cin >> num_intro;
	if ((num_intro < 1 or num_intro > 5) or cin.fail()){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Error. No está en el rango de numeros permitidos. Debe ser un número positivo entero";
		exit (1);
	}
	return num_intro;
}
void entrada_notas (avgr *Notas_Medias) {
	int cont_fila = 0, cont_col = 1;
	Notas_Medias->n_asignaturas = entrada_datos(("Cuantas asignaturas has cursado: "));
	Notas_Medias->puntuacion = new int *[Notas_Medias->n_asignaturas];
	while (cont_fila < Notas_Medias->n_asignaturas) {
		Notas_Medias->n_notas = entrada_datos("Cuantas notas tienes para la asignatura " + to_string(cont_fila + 1) + " : ");
		Notas_Medias->puntuacion[cont_fila] = new int [Notas_Medias->n_notas + 1];
		Notas_Medias->puntuacion[cont_fila][0] = Notas_Medias->n_notas;
		while (cont_col <= Notas_Medias->n_notas) {
			Notas_Medias->puntuacion[cont_fila][cont_col] = entrada_datos(to_string(cont_col+ 1) + ".- Nota para la asginatura " + to_string(cont_fila + 1) + ": ");
			cont_col++;
		}
		cont_fila ++;
		cont_col = 1;
	}
}

int main (){
	avgr Notas_Medias = {0, 0, nullptr};
	entrada_notas(&Notas_Medias);
	for (int f = 0; f < Notas_Medias.n_asignaturas; f++) {
		for (int r = 1; r <= Notas_Medias.puntuacion[f][0]; r++) {
			cout << Notas_Medias.puntuacion[f][r] << " ";
		}
		cout << endl;
	}
	return 0;
}
