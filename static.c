#include <stdio.h>
int initialiser()
{
    return 45;
}
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
    fprintf(stdout,"%d\n",t);
   // std::cout << t << std::endl;
    int q = 78;
    t = initialiser();
    fprintf(stdout,"%d\n",t);
    //std::cout << t << std::endl;
   // fun(5);
    return 0;
}
