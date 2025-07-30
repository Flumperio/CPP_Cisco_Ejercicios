// *****************************************
// Created by JCSantos on 11/07/2025.
// Curso Cisco: c++ Essentials 1
// 2.8.6   LAB   Palindromes once again
// *****************************************
#include <iostream>
using namespace std;

int main(void) {

    int vector[] = {1, 7, 3, 8, 5, 7, 1};
    bool ispalindrome = true;
    int n = sizeof(vector) / sizeof(vector[0]);
    for (int i=0; i < n; i ++) {
        if (vector[i] != vector[n-i-1]) {
            ispalindrome = false;
        }
    }
    if(ispalindrome)
        cout << "It's a palindrome";
    else
        cout << "It isn't a palindrome";
    cout << endl;
    return 0;
}