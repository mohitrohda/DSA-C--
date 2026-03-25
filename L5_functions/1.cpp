#include <iostream>
using namespace std;

int printhello() {
    cout << "Hello World\n";
    return 3;
}

int sum(int a, int b) {
    int s = 0;
    s = a+b;
    return s;
}

int min2no(int a, int b) {
    if(a>b) {
        cout << a << " is greater." << endl;
    } else if(b>a) {
        cout << b << " is greater" << endl;
    } else {
        cout << "both are equals" << endl;
    }

    return 0;
}


int main() {
    //cout << printhello() << endl;

    //cout << sum(10,6);

    min2no(9,9);

    return 0;
}