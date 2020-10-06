// program to calculate the distance between two points 

#include <iostream>
#include <cmath>
using namespace std;

class point{
    int x, y;
    public:
        point(int, int);
        void displaypoint(){
            cout<<"the co-ordinates of point is ("<<x<<", "<<y<<")"<<endl;
        }
        friend double distance(point, point);
        
};

point::point(int a, int b){
    x = a;
    y = b;
}

double distance(point p1, point p2){
    int dis2 = ((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y));
    double dis = sqrt(dis2);
    double result = abs(dis);
    return result;
}

int main(){
    point p1(4,6) , p2(8,9);
    p1.displaypoint();
    p2.displaypoint();

    double result = distance(p1,p2);
    cout<<"the distance between two points is "<<result<<endl;

    return 0;
}