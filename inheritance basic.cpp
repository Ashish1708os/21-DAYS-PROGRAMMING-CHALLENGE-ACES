#include <iostream>
using namespace std;

// base class
class employee{
    public:
    int id;
    float salary;
        employee(int inpId){
            id = 1;
            salary = 10000;
        }
        employee(){}
};

// derived class (syntax)
/* class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class member/methode/etc...
}
Note:-
1. default visibility mode is private
2. private visibility mode: public members of the base class becomes private members of the 
    derived class.
3. public visibility mode: public members of the base class becomes public members of the 
    derived class.
4. private members are never inharited
*/

// creating a programming class derived from employee base class
class programmer : public employee{
    public:
        int languageCode;
        programmer(int inpid){
            id = inpid;
            languageCode = 9;
        }
        void getdata(){
            cout<<id<<endl;
        }
};

int main(){
    // simple program showing inheritance basic
    employee ashish(1), shubham(2);
    cout<<ashish.salary<<endl;
    cout<<shubham.salary<<endl;

    programmer skilledAF(1);
    cout<<skilledAF.languageCode<<endl;
    cout<<skilledAF.id<<endl;
    skilledAF.getdata();
    
    return 0;
}