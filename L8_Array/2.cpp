#include <iostream>
using namespace std;

int main() {

    int size = 5;
    int marks[size];

    //loop for inputs of array
    for(int i=0; i<size; i++) {
        cout << "Enter the " << i+1 << " element of array = ";
        cin >> marks[i];
    }
    

    //loop for print 0 to size-1 in array
    for(int i=0; i<size; i++){
        cout << i << " element of array = " <<marks[i] << endl;
    }

    // smallest number in array
    int smallest = INT_MAX;
    for(int i=0; i<size; i++) {
        if(marks[i] < smallest) {
            smallest = marks[i];   // smallest = min(marks[i], smallest);
        }
        
    }
    cout << "Smallest number is = " << smallest << endl;

    return 0;
}