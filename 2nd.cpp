#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter 1st number";
    cin >> a;
    cout << "Enter 2nd number";
    cin >> b;

    cout << "sum = " << (a+b) << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = " << (a/b) << endl;
    cout << "modulo = " << (a%b) << endl; //remainder
    return 0;
}