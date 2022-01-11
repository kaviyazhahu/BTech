//In the call by reference, both formal and actual parameters share the same value.
#include <iostream>
using namespace std;
 
//Value of x is shared with a
void increment(int &a){
    a++;
    cout << "Value in Function increment: "<< a << ",Memory Location : "<<&a<<"\n";
}
 
int main()
{
    int x = 5;
    increment(x);
    cout << "Value in Function main: "<< x << ",Memory Location : "<<&x<<"\n";
    return 0;
}