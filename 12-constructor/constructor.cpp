#include <iostream>
using namespace std;

class employee
{
    private: // can be access within class only
        int secretPassword;

    public: // can be access out side class or function
        string name;
        int salary;

    employee(string name, int salary, int sp) //constructor
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword = sp;
    }

    void printdetails()
    {
        cout<<"Name of first employee is "<<this->name<<" and his salary is "<<this->salary<<endl;
    }  

    void getSecretPassword() //only internal methods can access private variables
    {
        cout << "Secret Password is: "<<this->secretPassword<<endl;
    } 
};

int main(){
    employee dk("DemonKiller", 1000, 1234);
    dk.printdetails();
    dk.getSecretPassword();
    // cout<<"Name of first employee is "<<dk.name<<" and his salary is "<<dk.salary<<endl;
}