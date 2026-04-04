#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int max_sum = INT_MIN;

    for(int st = 0; st < size; st++) {
        int curr_sum = 0 ;
        for(int end = st; end <size ; end++) {
            curr_sum += arr[end];
            max_sum = max(curr_sum, max_sum);
        }
    }

    cout << "max subarray sum = " << max_sum;

    return 0;
}