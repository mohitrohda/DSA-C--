#include <iostream>
using namespace std;

int arr_sum_prd(int arr[], int size) {

    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
        product = product * arr[i];
    }
    
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}

int main() {

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    cout << arr_sum_prd(arr, size);
    return 0;
}