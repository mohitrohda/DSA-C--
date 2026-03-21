#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cout<<"Enter value of N = ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        sum = sum + i;
    }

    cout<<"Sum = "<< sum << endl;


    

    return 0;
}
