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
    Point x(0,0);
    cin >> x.x >> x.y;
    x.print();
    return 0;
}

