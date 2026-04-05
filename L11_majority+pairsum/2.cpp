#include <iostream>
#include <vector>
using namespace std;

vector <int> pairsum(vector <int> vec, int target) {
    vector <int> ans;
    int n = vec.size();
    int i = 0;
    int j = n-1;

    while (i<j) {
        int ps = vec[i] + vec[j] ;
        if(ps<target) {
            i++;
        } else if(ps>target) {
            j--;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector <int> vec = {2, 7, 11, 15};
    int target = 22;

    vector <int> answ = pairsum(vec, target);
    cout << answ[0] << "," << answ[1] <<endl;
    
    return 0;
}