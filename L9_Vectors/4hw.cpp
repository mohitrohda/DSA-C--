#include <iostream>
#include <vector>
using namespace std;

void reverse_vector(vector <int>& vec, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main() {
    vector <int> vec = {1, 3, 5, 6, 3, 8, 7};
    int size = 7;

    reverse_vector(vec, size);

    for(int val : vec) {
        cout << val << " ";
    }

    return 0;
}