#include <iostream>
using namespace std;
struct point {
    int x;
    int y;

    point(int _x, int _y){
        _x = x;
        _y = y;
    }

};

void printTC(point& p){
        cout << &p << endl;
}

void printTT(point p){
    cout << &p << endl;
}

int main() {
    point p(3, 4);
    cout << &p << endl;
    printTC(p);
    printTT(p);
}
/*
0x61fe18
0x61fe18
0x61fdf0
*/
