#include <iostream>

using namespace std;
int main(void)
{
    cout << "Hello World\n";
//    int k = 1 % 2 + 4 % 2;
//    int i = 1;
//    int j = ++i;
//    int k = j++;
/* Ejercicio 2
int i = 3, j, k;

if(i > 0) j = 2 + i * i;
if(i <= 0) j = 2 * i - 1;
if(j >= 0) k = j % i + 2;
if(j < 0) k = i % j + 2;
if(k < 0) k = k % i % j;
if(k >= 0) k = j % i % k;
*/
/*
int i = 3, j = 2, k = -1;

if(i > 0) {
    if(j <= 0) {
        if(k < 0)
            k++;
        if(k <= 0)
            k--;
    }
    if(j > 0)
        i++;
}

if(i <= 0)
    j++;

k = i + j + k;


    cout << k;
*/

/* Ejerccio 3
    int i = 3, j = ++i, k = ++i;

    cin >> i;
    cout << k + i << j - i << i * i;
*/
/* Ejercicio 5
    int i = 3, j = ++i, k = ++i;

    cin >> i;
    cout << k + i << j - i << i * i;
*/
/* Ejerccio 7
    int i;

    cin >> i;
    cout << i << hex << i + i << oct << i;
*/
    float x;

    cin >> x;
    cout << scientific << "x";
    return 0;
}


	
