#include <iostream>
#include <vector>
using namespace std;

int main() {

    //vector <int> vec;
    vector <int> vect = {2, 3, 4};

    vector <int> vec (5,1);

    for(int val : vec) {         // FOR EACH LOOP
        cout << val << endl;
    }

    return 0;
}