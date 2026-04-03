#include <iostream>
#include <vector>
using namespace std;

void linear_search(vector<int> vec, int size, int target) {

    for(int i=0 ; i< size; i++) {
        if(vec[i] == target) {
            cout << "Target found at index " << i << endl;
        }
    }
}

int main() {

    vector <int> vec = {1, 3, 5, 6, 3, 8, 7};
    int size = 7;
    int target = 3;

    linear_search(vec, size, target);

    return 0;
}