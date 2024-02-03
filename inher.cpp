#include<iostream>
using namespace std;

class shape {
public:
    int t,p;
public:
    shape() {
        cout << "name this" <<endl;
        t = 90;
        p = 78;
    }
    void draw() {
        cout << "draw a shape" << endl;
    }
};

class Rect : virtual public shape {
public:
    Rect() {
        cout << "this is a derived" << endl;
        t = 98;
    }
    void draw() {
        cout << "draw a rectangle" << endl;
    }
};

int main() {
    shape *obj1 = new Rect();
    obj1->draw();
    return 0;
}
