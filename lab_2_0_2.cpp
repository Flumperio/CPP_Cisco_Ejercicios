#include <iostream>
using namespace std;

int main(void) {
	int year;
	
	cout << "Enter a year: ";
	cin >> year;
	
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " It's a leap Year." << endl;
    }
    else
    {
        cout << year << " It's a common Year."<< endl; 
    }
	return 0;
}

