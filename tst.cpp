#include <iostream>
#include <cstdlib>
int main() {
    int* ptr = (int*) malloc(sizeof(int));
    int *ptrr = (int*) calloc(sizeof(int), 10);
    *ptr = 456;
    ptrr[0] = 23;
    std::cout << *ptr << " " << ptrr[0] << std::endl;
    return 0;
}
