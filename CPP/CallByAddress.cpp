//In the call by address method, both actual and formal parameters indirectly share the same variable.
#include <iostream>
using namespace std;
 
//a stores the address of x
void increment(int *a){
    (*a)++;
    cout << "Value in Function increment: "<< *a << ",Memory Location : "<<&a<<"\n";
}
 
int main()
{
    int x = 5;
    increment(&x); //Passing address of x
    cout << "Value in Function main: "<< x << ",Memory Location : "<<&x<<"\n";
    return 0;
}