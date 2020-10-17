#include <iostream>
using namespace std;

class base{
    protected:
        int a = 103;
    private:
        int b;
};
/*
for a protected member
                    | Public derivation   |   Private derivation  |    Protected derivation
1. Private member   |     not inherited   |    not inherited      |     not inharied
2. Protected member |     protected       |    Private            |     Protected
3. Public member    |     public          |    Private            |     Protected
*/

class derived : protected base{
    public:
        // funtion to access protected data members
        int getdata(){
            return a;
        }
};

int main(){
    derived d;
    // cout<<d.a<<endl; // gives error because a is proteced in derived class
    int value = d.getdata();
    cout<<value<<endl;

    return 0;
}