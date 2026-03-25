#include <iostream>
using namespace std;

int sum_n(int n) {
    
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i;
    }

    return sum;

}

int fact_n(int n) {
    
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }

    return fact;

}

int main() {

    //cout << sum_n(6);

    cout << fact_n(5);

    return 0;
}