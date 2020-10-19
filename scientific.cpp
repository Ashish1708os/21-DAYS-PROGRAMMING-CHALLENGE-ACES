/*
Create 2 classes:
    1. SimpleCalculator - takes input of 2 numbers using utility funtion and perform +, -, *,
    / operations and display the results using another funtion
    2. ScientificCalculator - takes input of 2 numbers using utility funtion and perform any
    four scientific operations of your choice and display the results using another 
    3. create another class hybridCalculator and inherit it using these 2 classe
*/
#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator{
    protected:
        double num1;
        double num2;
        double result;
    public:      
        void get_num1(double a){
            num1 = a;
        }
        void get_num2(double b){
            num2 = b;
        }
        void addition();
        void substraction();
        void multiply();
        void division();
};

void SimpleCalculator :: addition(){
    result = num1 + num2;
    cout<<"addition is "<<result<<endl;
}

void SimpleCalculator :: substraction(){
    result = num1 - num2;
    cout<<"substraction is "<<result<<endl;
}

void SimpleCalculator :: multiply(){
    result = num1 * num2;
    cout<<"multiply is "<<result<<endl;
}

void SimpleCalculator :: division(){
    result = num1 / num2;
    cout<<"division is "<<result<<endl;
}

class ScientificCalculator{
    protected:
        double rad;
        int degree;
        double radian;
    public:
        void get_rad(double c){
            rad = c;
        }
        void get_degree(int d){
            degree = d;
        }
        void degree_convertor(){
            radian = (degree*3.14159)/180;
        }
        void sin_rad();
        void sin_degree();
        void cos_rad();
        void cos_degree();
        void tan_rad();
        void tan_degree();
        void log_func();
};

void ScientificCalculator :: sin_rad(){
    cout<<"the value of sin("<<rad<<") is "<<sin(rad)<<endl;
}

void ScientificCalculator :: sin_degree(){
    degree_convertor();
    cout<<"the value of sin("<<degree<<") is "<<sin(radian)<<endl;
}

void ScientificCalculator :: cos_rad(){
    cout<<"the value of cos("<<rad<<") is "<<cos(rad)<<endl;
}

void ScientificCalculator :: cos_degree(){
    degree_convertor();
    cout<<"the value of cos("<<degree<<") is "<<cos(radian)<<endl;
}

void ScientificCalculator :: tan_rad(){
    cout<<"the value of tan("<<rad<<") is "<<tan(rad)<<endl;
}
void ScientificCalculator :: tan_degree(){
    degree_convertor();
    cout<<"the value of tan("<<degree<<") is "<<tan(radian)<<endl;
}

void ScientificCalculator :: log_func(){
    cout<<"the value of log("<<rad<<") is "<<log10(rad)<<endl;
}

class hybridCalculator : public SimpleCalculator, public ScientificCalculator{
    public:
        void get_numbers(){
            double a, b;
            cout<<"enter first number : ";
            cin>>a;
            cout<<"enter secend number : ";
            cin>>b;
            get_num1(a);
            get_num2(b);
        }
        void get_radian(){
            double a;
            cout<<"enter the number : "<<endl;
            cin>>a;
            get_rad(a);
        }
        void get_deg(){
            double b;
            cout<<"enter the number : "<<endl;
            cin>>b;
            get_degree(b);
        }
};

int main(){
    cout<<"Scientific Calculator"<<endl;
    hybridCalculator h1;
    
    while(true){
        cout<<"choises :"<<endl;
        cout<<"1. addition"<<endl;
        cout<<"2. substration"<<endl;
        cout<<"3. multiply"<<endl;
        cout<<"4. division"<<endl;
        cout<<"5. sin (radian)"<<endl;
        cout<<"6. sin (degree)"<<endl;
        cout<<"7. cos (radian)"<<endl;
        cout<<"8. cos (degree)"<<endl;
        cout<<"9. tan (radian)"<<endl;
        cout<<"10. tan (degree)"<<endl;
        cout<<"11. log"<<endl;
        cout<<"12. exit"<<endl<<endl;
        int ch;
        cout<<"enter your choise : ";
        cin>>ch;
        
        switch (ch){
            case 1:
                h1.get_numbers();
                h1.addition();
                break;
            case 2:
                h1.get_numbers();
                h1.substraction();
                break;
            case 3:
                h1.get_numbers();
                h1.multiply();
                break; 
            case 4:
                h1.get_numbers();
                h1.division();
                break;
            case 5:
                h1.get_radian();
                h1.sin_rad();
                break;
            case 6:
                h1.get_deg();
                h1.sin_degree();
                break;
            case 7:
                h1.get_radian();
                h1.cos_rad();
                break;
            case 8:
                h1.get_deg();
                h1.cos_degree();
                break;
            case 9:
                h1.get_radian();
                h1.tan_rad();
                break;
            case 10:
                h1.get_deg();
                h1.tan_degree();
                break;
            case 11:
                h1.get_radian();
                h1.log_func();
            case 12:
                exit(0);
            default:
                cout<<"invalild case"<<endl;
        }
    }
    return 0;
}