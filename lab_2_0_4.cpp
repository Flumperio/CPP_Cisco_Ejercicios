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

    cout << sys;
}

