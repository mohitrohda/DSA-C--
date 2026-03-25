#include <iostream>
using namespace std;

int primeno(int n) {
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            cout << "Not Prime";
            break;
        }else{
            cout << "PRIME";
            break;
        }
    }
    return 0;
}


int main() {

    cout << primeno(8);

    return 0;
}