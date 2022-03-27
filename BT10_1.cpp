#include <iostream>

using namespace std;

struct Point{
    double x;
    double y;
    Point(int _x, int _y){
        _x = x;
        _y = y;
    }

    void print(){
        cout << "(" << x << "," << y << ")";
    }
};

int main(){
    Point p(0,0);
    cin >> p.x >> p.y;
    .print();
    return 0;
}

