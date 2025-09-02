// *****************************************
// Created by JCSantos on 7/31/2025.
// Curso Cisco: c++ Essentials 1
// 4.4.10   LAB   Text manipulation: eliminate duplicates
// *****************************************
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

struct Cadena {
    string  sentence;
    string  result;
    string  word;
};

void check_duplicate (Cadena *entrada){
    for (char c : entrada->sentence){
        if (isalpha(c) || c == ',' || c == ';' || c == '.'){
            entrada->word.push_back(c);
        }else{
            if ((entrada->result.find(entrada->word) == string::npos || entrada->result[entrada->result.size() - 2] == ',' )) {
                entrada->result += entrada->word + " ";
                entrada->word.clear();
            } else 
                entrada->word.clear();
        }
    }
   entrada->result += entrada->word;
}

int main () {
    Cadena nueva_cadena;
		cout << "Escbribe la senentencia para quitar los duplicados: ";
		getline (cin, nueva_cadena.sentence);
        check_duplicate(&nueva_cadena);
        cout << nueva_cadena.result << endl;
	return 0;
}
