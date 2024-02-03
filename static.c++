#include <iostream>

/*void fun(int i) {
    if(i > 0) {
        static int p =i;
        std::cout << p << std::endl;
        i--;
        fun(i);
    }
}
*/
int main() {
    static int t = 90;
    std::cout << t << std::endl;
    int q = 78;
    t = q;
    std::cout << t << std::endl;
   // fun(5);
    return 0;
}
