#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age > 100 || age<1){
        cout << "Invalid age"<<endl;
    }
    else if (age <=18 || age >= 75)
    {
        cout<<"You cannot drive!"<<endl;
    }
    else
    {
        cout<<"You can drive!"<<endl;
    }
}