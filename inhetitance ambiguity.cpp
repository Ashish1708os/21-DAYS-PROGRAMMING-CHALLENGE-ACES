#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"how are you"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"kaise ho!!!"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base2::greet();
        }
};

class B{
    public:
        void say(){
            cout<<"hello world"<<endl;
        }
};

class D : public B{
    int a;
    public:
    //D's new say() methode will override base class's say()methode
        void say(){
            cout<<"hello my world"<<endl;
        }
};

int main(){
    // ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived de;
    de.greet();

    // ambiguity 2
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}