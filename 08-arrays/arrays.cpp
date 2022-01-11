#include <iostream>
using namespace std;

// int main() {
//     //collection of a single data type -> array
//     // int arr[10];
//     int arr[3] = {5, 6, 7};
//     cout<<arr[2]<<endl; //call by indexing
// }

//Single Dimensional:
// int main(){
//     int marks[4];

//     for (size_t i = 0; i < 4; i++) //size_t used over int
//     {
//         cout<<"Enter the marks of "<<i<<"th student"<<endl;
//         cin>>marks[i];
//     }

//     for (size_t i = 0; i < 4; i++) //size_t used over int
//     {
//         cout<<"Marks of "<<i<<"th student is: "<<marks[i]<<endl;
//     }
    
// }

//Multidimensional Arrays
int main(){
    int arr2d [2][3] = {
        {1,2,3}, {4,5,6}
    };

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout<<"The Value at "<<i<<", "<<j<<" is "<<arr2d[i][j]<<endl;
        }   
    } 
}
