#include<iostream>
using namespace std;

int main(){
    float num1, num2;
    cout<<"Enter two numbers A & B: ";
    cin>>num1>>num2;
    cout<<"Numbers you entered are A="<<num1<<" & B="<<num2<<endl;

    float sum, sub, mul, div, rem;
    
    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;
    // rem = num1%num2;

    cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
    cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<sub<<endl;
    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<mul<<endl;
    cout<<"Division of "<<num1<<" and "<<num2<<" is "<<div<<endl;
    // cout<<"Remainder of "<<num1<<" and "<<num2<<" is "<<rem<<endl;
}