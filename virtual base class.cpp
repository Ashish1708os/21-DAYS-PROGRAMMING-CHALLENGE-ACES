#include <iostream>
using namespace std;
/*
inheritance :
student --> test
student --> spotrs
test ---> student
sports ---> student
*/

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(){
            cout<<"your roll no. is "<<roll_no<<endl;
        }
};

class test : virtual public student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<"your result is here : "<<endl
                <<"maths : "<<maths<<endl
                <<"physics : "<<physics<<endl;
        }
};

class sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"your PT score is : "<<score<<endl;
        }
};

class result : public test, public sports{
    private:
        float total;
    public:
    void display(){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is : "<<total<<endl;
    }
};

int main(){
    result ashish;
    ashish.set_number(830);
    ashish.set_marks(80, 70);
    ashish.set_score(8);
    ashish.display();
    return 0;
}