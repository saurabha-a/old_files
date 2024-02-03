#include<iostream>
using namespace std;

class Base1
{
   int x;
public:
    void fun(){cout << "this is base1 class" << endl;}
    int getX() { return x; }
};

class Base2 {
public:
    virtual void fun() {cout << "this is base2 class" << endl;}
};
// This class inherits from Base and implements fun()
class Derived : public Base1, virtual public Base2
{
    int y;
public:
    //void fun() {cout << "fun() called"; }
};

int main(void)
{
    Derived d;
    d.fun();
    cout << endl;
    //Base2 *b = new Derived();
    //b->fun();
    return 0;
}
