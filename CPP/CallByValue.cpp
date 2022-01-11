// The value of the actual parameters is copied into formal parameters.
#include <iostream>
using namespace std;
 
//Value of x gets copied into a (i.e Formal parameter)
void increment(int a){
    a++;
    cout << "Value in Function increment: "<< a << ", Memory Location: "<<&a<<"\n";
}
 
int main()
{
    int x = 5;
    increment(x); // Actual Parameter
    cout << "Value in Function main: "<< x << ",Memory Location : "<<&x<<"\n";
    return 0;
}