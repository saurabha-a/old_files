#include <iostream>

class Rectangle {

    public:
        int length, breadth;
    public:
        Rectangle(int a, int b) {
            length = a;
            breadth = b;
        }

       Rectangle(Rectangle *r) {
            length = 25;
            breadth = 50;
        }

        /* 
        Rectangle(const Rectangle& r) {
            length = r.length;
            breadth = r.breadth;
        }
        */
        void print_data() {
            std::cout << length << " " << breadth << std::endl;

        }
};

int main() {

    Rectangle r1 (20, 30);
    r1 . print_data();
    Rectangle r2 =r1;
    r1.length = 56; r1.breadth = 89;
    r1 . print_data();
    r2.print_data();
    return 0;
}
