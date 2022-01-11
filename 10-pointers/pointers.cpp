#include <iostream>
using namespace std;

// int main()
// {
//     int a = 34;
//     int *ptra; // * is dereferencing operator for pointer
//     ptra = &a; // & - address of variable

//     cout<<ptra<<endl; // print address of a
//     cout<<*ptra<<endl; // print value of a
// }

//Pointer and arrays

int main(){
    int marks [] = {23,45,56,89};
    int *p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[0] is "<<*(p+1)<<endl;
    cout<<"The value of marks[0] is "<<*(p+2)<<endl;
    cout<<"The value of marks[0] is "<<*(p+3)<<endl;
}