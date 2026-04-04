#include <iostream>
#include <vector>
using namespace std;

// kadane algorithm
int kadane_algo(vector <int> nums) {
    int currsum = 0; 
    int maxsum = INT_MIN;

    for(int val : nums) {
        currsum += val;
        maxsum = max(currsum, maxsum);
        if(currsum < 0) {
            currsum = 0;
        }
    }
    return maxsum;
}

int main() {
    vector <int> nums = {3, -4, 5, 4, -1, 7, -8};
    cout << "Max Subarray sum = "<< kadane_algo(nums) << " ";
    return 0;
}