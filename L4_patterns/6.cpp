// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for(int i=0; i<n; i++) {
//         for(int j=1; j<=i+1; j++) {
//             cout << j;
//         }
//     cout << endl;
//     } 

//     return 0;
// }   

// 1
// 12
// 123
// 1234
// 12345




// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int num = 1;

//     for(int i=0; i<n; i++) {
//         for(int j=1; j<=i+1; j++) {
//             cout << num;
//         }
//         num++;
//         cout << endl;
//     }
//     return 0;
// }   


#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char ch = 'A';

    for(int i=0; i<n; i++) {
        for(int j=1; j<=i+1; j++) {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
    return 0;
}   



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i=0; i<n; i++) {

//         for(int j=0; j<i; j++){
//             cout<< " ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<i+1;
//         }
//         cout << endl;

//     }
    

//     return 0;
// }   

// 1111
//  222
//   33
//    4