#include <iostream>
using namespace std;

int main() {
    int evensum = 0;
    int n;
    cout<<"Enter value of N = ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        if(i%2==0){
            evensum = evensum + i;
        }
    }

    cout<<"Sum = "<< evensum << endl;

    return 0;
}
