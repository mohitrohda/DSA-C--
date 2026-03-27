#include <iostream>
using namespace std;

int main() {

    int marks[5] = {99, 100, 13, 36, 88};
    //cout << sizeof(marks) / sizeof(int) << endl;
    int size = sizeof(marks) / sizeof(int);

    //loop for 0 to size-1 in array
    for(int i=0; i<size; i++){
        cout << marks[i] << endl;
    }

    return 0;
}