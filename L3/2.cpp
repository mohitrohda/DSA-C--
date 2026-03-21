#include <iostream>
using namespace std;

int main() {
    int oddsum = 0;
    int n;
    cout<<"Enter value of N = ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        if(i%2!=0){
            oddsum = oddsum + i;
        }
    }

    cout<<"Sum = "<< oddsum << endl;

    return 0;
}
