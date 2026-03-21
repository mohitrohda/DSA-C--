#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n = 8;

    int i = 1;
    while(i<=n){
        if(i%2!=0){
            sum = sum + i;
        }
        i++;
    }
    cout<<"sum = "<<sum<<endl;

    return 0;
}
