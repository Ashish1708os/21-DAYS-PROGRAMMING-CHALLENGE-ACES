#include <iostream>
using namespace std;

class student{
    int roll_no;
    public:
        void get_roll_no(int a){
            roll_no = a;
        }
};

class exam{
    int marks;
    public:
        void get_marks(int b){
            marks = b;
        }
        void display_marks(){
            cout<<"your marks are "<<marks<<endl;
        }
};

class display : public student, public exam{
        
};

int main(){
    display s1;
    int roll;
    int marks;
    cout<<"enter roll number : ";
    cin>>roll;
    cout<<"enter marks : ";
    cin>>marks;
    s1.get_roll_no(roll);
    s1.get_marks(marks);
    s1.display_marks();
    return 0;
}