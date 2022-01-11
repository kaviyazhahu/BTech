//In the call by address method, both actual and formal parameters indirectly share the same variable.
#include <iostream>
using namespace std;
 
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout <<"Values In Swap function, x = "<<*x<<", Address:"<<&x <<",y = "<<*y<<", Address:"<<&y <<"\n";
}

int main()
{
    int x=20,y=21;
    cout <<"Values Before Swap function, x = "<<x<<", Address:"<<&x <<",y = "<<y<<", Address:"<<&y <<"\n";
    swap(&x,&y);
    cout <<"Values After Swap function, x = "<<x<<", Address:"<<&x <<",y = "<<y<<", Address:"<<&y <<"\n";
    //
    return 0;
}