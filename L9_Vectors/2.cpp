#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec;      //(6, 3);

    cout << "Vector size = " << vec.size() << endl;

    vec.push_back(25);
    vec.push_back(55);
    vec.push_back(98);
    cout << "After push back vector size = " << vec.size() << endl;
    vec.pop_back();


    for(int val : vec) {
        cout << val << endl ;
    }

    cout << endl ;
    cout << endl ;

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    cout<< vec.at(0) << endl;

    return 0;
}