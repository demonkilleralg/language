#include <iostream>
using namespace std;

struct employee 
{
    int eId;
    char favChar;
    float salary;
};

int main(){
    struct employee dk;
    dk.eId=1;
    dk.favChar='d';
    dk.salary=1000;
    cout<<"Value is eId is"<<dk.eId<<endl;
    cout<<"Value of favchar is "<<dk.favChar<<endl;
    cout<<"Value of salary is "<<dk.salary<<endl;
}