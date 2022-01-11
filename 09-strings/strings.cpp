#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "DemonKiller";
    string sur = " the Great";
    cout<<"Name is "<<name<<endl;
    cout<<"Length of name is "<<name.length()<<endl;
    cout<<"Substring: "<<name.substr(0,5)<<endl;
    cout<<"Name is "<<name+sur<<endl;
}