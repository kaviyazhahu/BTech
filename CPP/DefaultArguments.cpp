#include <iostream>
using namespace std;
 
// function prototype
int multiplication(int a, int b=2);

int main() {
    // calling the function before declaration.
    int n  = 1 ;
    cout << "* Default Argument Function Example Program\n";
    cout << "First Argument passsed: "<< multiplication(5)<<"\n";
    cout << "Second Argument passsed: "<< multiplication(5,15)<<"\n";
    return 0;
}

// function definition
int  multiplication(int a, int b) {
    int value=a * b;
    return value;
}