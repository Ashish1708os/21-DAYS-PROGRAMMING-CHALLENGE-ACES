#include <iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number();
};

void student :: set_roll_number(int r){
    roll_number = r;
}

void student :: get_roll_number(){
    cout<<"the roll number is "<<roll_number<<endl;
}

class exam : public student{
    protected:
        float math;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks();
};

void exam :: set_marks(float m1, float m2){
    math = m1;
    physics = m2;
}

void exam :: get_marks(){
    cout<<"the marks obtained in maths are "<<math<<endl; 
    cout<<"the marks obtained in physics are "<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"your percentage is "<<(math+physics)/2<<"%"<<endl;
        }
};

int main(){
    result ashish;
    ashish.set_roll_number(830);
    ashish.set_marks(85, 79);
    ashish.display_result();

    return 0;
}

/*
Notes:
    if we are inheriting B from A and C from B:[ A--->B--->C ]
    1. A is the base class for B and B is the base class for C
    2. A--->B--->C is called inheritance path
*/