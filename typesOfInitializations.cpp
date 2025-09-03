#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int a = 1;    // copy initialization
    cout << "Value of a is " << a << endl;
    
    int b (2);    // direct initialization
    cout << "Value of b is " << b << endl;

    int c {3};    // direct-list initialization
    cout << "Value of c is " << c << endl;
    
    int d = {4};  // copy-list initialization
    cout << "Value of d is " << d << endl;

    int e {};     // value initialization
    cout << "Value of e is " << e << endl;

    return 0;


}
