#include <iostream>

using namespace std;

int main(void) {
    int sys, cnt;
    float m, ft, in;
    m = 0.0;
    ft = 0.0;
    in = 0.0;
    sys = 0;
    cnt = 0;
    cout << m << endl << ft << endl << in << endl << sys << endl ;

    /* *************************************
     ***** Entrada de datos ****************
     ************************************ */

    do {
        cout << "What system do you want use. 0 for metric, 1 for imperial: " << endl ;
        cin >>  sys;
        if ((sys != 0 and sys != 1) or cin.fail()) {
            cout << "This is not a valid option" << endl ;
            cin.clear();
            cin.ignore(1000, '\n');
            cnt += 1;
        } else {
            cnt = 10;
        }

    } while (cnt < 3);

    cout << sys << endl;
    cnt = 0;
    do {

        if (sys == 0){
            cout << "Please, input the meters, with decimal if you want, to converter: ";
            cin >> m;
            cnt += 1;
        } else {
            cout <<"Please, in0put the feet:";
            cin >> ft;
            cout << endl << "Please, input the inches, with decimals if you want: ";
            cin >> in;
            cnt += 1;
        }
        if (cin.fail()) {
            cout << "You numbers is not correct. Please try again" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            cnt = 10;
        }

    } while (cnt < 3);

    /* *************************************
     ***** Calculo de metrico a imperial ***
     ************************************ */






















}
