#include <iostream>
#include <cstdlib>
using namespace std;

class Employee{
    int Id;
    int salary;
    public:
        void setId(){
            cout<<"enter the Id of the employee : ";
            cin>>Id;
            salary = 10000;
        }

        void getId(){
            cout<<"The ID of the employee is "<<Id<<endl;
        }
};

int main(){
    // Employee Ashish, Shubham;
    // Ashish.setId();
    // Ashish.getId();

    Employee fb[3];
    for(int i=0; i<3; i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}