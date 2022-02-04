//Recursion is when a function keeps calling it self
#include <iostream>
using namespace std;

//factorial
// int factorial(int n)
// {   
//     if (n<1)
//     {
//         return 1;
//     }
//     else
//         return n*factorial(n-1); // O(n) complexity
// }

// int main(){
//     // Factorial of a number
//     int a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     cout<<"Factorial of A is "<<factorial(a)<<endl;
// }

// Fibonacci Series
int fibo(int n) {
    if (n<2)
    {
        return 1;
    }
    else
        return fibo(n-2) + fibo(n-1);
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Fibonacci of A at position "<<a<<" is: "<<fibo(a)<<endl;
}