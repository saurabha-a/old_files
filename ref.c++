#include <iostream>

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;

}
int main()
{
    int x =23, y =78;
    swap(x, y);
    std::cout << x << " " << y;
    return 0;
}
