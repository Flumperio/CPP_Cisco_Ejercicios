#include <iostream>

using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	
	// Insert you code here

    if (cin.fail()){
        cout << "Error. El valor introducido no es un número" << endl;
        return 255;
    }
    if (grossprice <=0.0 || taxrate < 0.0 || taxrate > 100.0){
        cout << "Los valores introducidos no son correctos.";
        return 255;
    }

    netprice = grossprice / (1 + (taxrate/100));
    taxvalue = grossprice - netprice;

	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}
