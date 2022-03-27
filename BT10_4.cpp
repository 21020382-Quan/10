#include <iostream>
using namespace std;
struct Point {
    int x;
    int y;

    Point() {

    }

    Point(int _x, int _y) {
        _x = x;
        _y = y;
    }

};

int main() {
    int x, y;
    cin >> x >> y;//2 3
    Point p(x, y);
    cout << &p << endl; //0x61fe10
    cout << &p.x << endl; //0x61fe10
    cout << &p.y << endl; //0x61fe14
    return 0;
}

// địa chỉ của p và p.x như nhau còn địa chỉ của p.y cách nột số bit tùy vào kiểu dữ liệu khai báo
