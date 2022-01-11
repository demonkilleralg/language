#include<iostream>
using namespace std;

int main(){
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;

    // switch (age)
    // {
    // case 12:
    //     cout<<"You are are 12"<<endl;
    //     break;
    // case 18:
    //     cout<<"You are are 18"<<endl;
    //     break;
    // default:
    // cout<<" You are neither 12 nor 18"<<endl;
    //     break;
    // }

    char answer;
    cout<<"Should we kick this man?? (y/n)";
    cin>>answer;

    switch (answer)
    {
    case 'y':
        cout<<"Let's kick this man!"<<endl;
        break;

    case 'n':
        cout<<"Don't kick this man!"<<endl;
        break;

    default:
    cout<<"Don't do anything"<<endl;
        break;
    }
}