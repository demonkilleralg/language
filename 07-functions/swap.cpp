#include <iostream>
using namespace std;

//call by reference
void swapno (int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

//call by reference using c++ reference variable
void swapno (int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x=3, y=4;
    swapno(&x,&y);
    cout <<"Value of X is "<<x<<" & Y is "<<y<<endl;
}