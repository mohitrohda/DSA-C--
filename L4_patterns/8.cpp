#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i=1; i<=n; i++) {
        
        //frnt triangle
        for(int j=1; j<=i; j++) {
            cout<< "*";
        }

        //upper space
        for(int j=1; j<=(n-i)*2; j++) {
            cout<< " ";
        }

        //last triangle
        for(int j=1; j<=i; j++) {
            cout<< "*";
        }
        

        cout << endl ;
    }


    for(int i=n; i>=1; i--) {

        // bottpm frnt triangle
        for(int j=1; j<=i; j++) {
            cout<< "*";
        }

        //lower space 
        for(int j=1; j<=(n-i)*2; j++) {
            cout<< " ";
        }

        //bottom last triangle
        for(int j=1; j<=i; j++) {
            cout<< "*";
        }
    
       cout<< endl;

    }

    return 0;
}
