#include <iostream>
using namespace std;

void primenosum(int n) {
    for(int i=2; i<=n; i++) {
        bool isprime = true;

        for(int j=2; j<i; j++) {
            if(i%j == 0) {
                isprime = false;
                break;
            }
        }

        if (isprime) {
            cout << i << " ";
        }
    }
}


int main() {
    primenosum(29);
    return 0;
}