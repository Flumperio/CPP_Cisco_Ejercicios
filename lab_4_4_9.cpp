// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
//  4.4.9   LAB   Text manipulation: duplicate white space
// *****************************************
#include <iostream>
#include <string>

using namespace std;

int main () {
	string sentence;
    string sentence_clean;
    size_t contador = 0;
		cout << "Escbribe la senentencia para quitar los espacios de más: ";
		getline (cin, sentence);
        while (sentence[contador] !='\0'){
            if (sentence[contador] == ' ' && sentence[contador + 1] == ' '){
                contador++;    
            } else {
                sentence_clean.push_back(sentence[contador]);
                contador++;
            }
        }
        cout << endl;
        sentence_clean[contador] = '\0';
        contador = 0;
        cout << sentence_clean << endl;
	return 0;
}
