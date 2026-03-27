#include <iostream>
using namespace std;

int main() {

    int marks[] = {22, 147, 9, -5, 23, 76};
    int size = sizeof(marks) / sizeof(int);

    int smallest = INT_MAX;
    int index_of_smallest = 0;
    int largest = INT_MIN;
    int index_of_largest = 0;

    for(int i = 0; i < size; i++) {
        if(marks[i] < smallest) {
            smallest = marks[i];
            index_of_smallest = i;
        }

        if(marks[i] > largest) {
            largest = marks[i];
            index_of_largest = i;
        }

    }

    cout << "Smallest No = " << smallest << " and index is = " << index_of_smallest <<endl;
    cout << "Largest No = " << largest << " and index is = " << index_of_largest <<endl;

    return 0;
}