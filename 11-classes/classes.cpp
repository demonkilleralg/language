#include <iostream>
using namespace std;

class employee
{
    private: // can be access within class only

    public: // can be access out side class or function
        string name;
        int salary;

    void printdetails()
    {
        cout<<"Name of first employee is "<<this->name<<" and his salary is "<<this->salary<<endl;
    }   
};

int main(){
    employee dk;
    dk.name = "demonkiller";
    dk.salary = 1000;
    dk.printdetails();
    // cout<<"Name of first employee is "<<dk.name<<" and his salary is "<<dk.salary<<endl;
}