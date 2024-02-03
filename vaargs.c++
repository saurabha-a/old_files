#include<iostream>

class base {
private:
    char a , b ;
public:
    base(int a =0, int b =0):a((char)a), b((char)b) {
        std::cout << "this is a constructor" << std::endl;
    }
    void print() {std::cout << a << " " << b << std::endl;}
};

int main() {
   base b (60, 65);
   b.print();
   return 0;
}
