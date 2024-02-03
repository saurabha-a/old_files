#include <iostream>
int main()
{
    int i = 7;
    while(i-- > 0)//first decrements the value of i then executes the code inside and at the end checks the value of the i according to the given condition;opposite to it is while(--i > 0);
    std::cout << i << std::endl;
    return 0;
}
