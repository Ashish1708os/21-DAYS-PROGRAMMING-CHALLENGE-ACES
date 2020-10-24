#include<iostream>
#include<conio.h>
using namespace std;

class student {
    int rno;
public:

    void getnumber() {
        cout << "Enter Roll No:";
        cin>>rno;
    }

    void putnumber() {
        cout << "\n\n\tRoll No:" << rno << "\n";
    }
};

class test : virtual public student {
public:
    int Maths, Physics;

    void getmarks() {
        cout << "Enter Marks\n";
        cout << "Maths:";
        cin>>Maths;
        cout << "Physics:";
        cin>>Physics;
    }

    void putmarks() {
        cout << "\tMarks Obtained\n";
        cout << "\n\tMaths:" << Maths;
        cout << "\n\tPhysics:" << Physics;
    }
};

class sports : public virtual student {
public:
    int score;

    void getscore() {
        cout << "Enter Sports Score:";
        cin>>score;
    }

    void putscore() {
        cout << "\n\tSports Score is:" << score;
    }
};

class result : public test, public sports {
    int total;
public:

    void display() {
        total = Maths + Physics + score;
        putnumber();
        putmarks();
        putscore();
        cout << "\n\tTotal Score:" << total;
    }
};

int main() {
    result obj;
    // clrscr();
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
    getch();
}