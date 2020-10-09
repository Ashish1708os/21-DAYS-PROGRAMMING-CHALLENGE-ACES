#include <iostream>
using namespace std;

int main(){
    int n;
    int num1;
    int chances = 5;
    cout<<"Enter the number : ";
    cin>>n;

    while(chances > 0){
        cout<<"guess the number : ";
        cin>>num1;

        if(num1==n){
            chances--;
            cout<<"your guess is correct"<<endl;
            cout<<"chances left : "<<chances<<endl;
            break;
        }
        else if(num1>n){
            chances--;
            cout<<"you entered greater number"<<endl;
            cout<<"chances left : "<<chances<<endl;
            continue;
        }
        else{
            chances--;
            cout<<"you entered smaller number"<<endl;
            cout<<"chances left : "<<chances<<endl;
            continue;
        }
    }
    if(num1==n){
        cout<<"you wins!!!"<<endl;
    }
    else{
        cout<<"you failed"<<endl;
    }
    return 0;
}