#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a = "abcd";
    string b = "ef";
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;

    string a1 = a;
    string b1 = b;

    a1[0] = b[0];
    b1[0] = a[0];

    cout<<a1<<" "<<b1<<endl;
  
    return 0;
}