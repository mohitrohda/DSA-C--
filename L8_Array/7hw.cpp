#include <iostream>
using namespace std;

void swap_min_max(int arr[], int size) {

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int index_of_smallest = 0;
    int index_of_largest = 0;

    for(int i = 0; i < size; i++) {

        if(arr[i]<smallest){
            smallest = arr[i];
            index_of_smallest = i;
        }

        if(arr[i]>largest){
            largest = arr[i];
            index_of_largest = i;
        }

    }

    //swap
    swap(arr[index_of_largest],arr[index_of_smallest]);

}


int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    swap_min_max(arr, size);

    for(int i=0; i<size ; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}