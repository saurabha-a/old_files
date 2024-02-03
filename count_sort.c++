#include <iostream>

void count_sort(int ar[], int size)
{
    int indx_ar[10];
    for(const auto &x : indx_ar) {}




}

int main()
{
    std::cout << "the sort is to be performed on array in the range 0-9\n";
    int ar[] = {1, 4, 1, 2, 7, 5, 2};
    count_sort(ar, 7);
    std::cout << "the sorted array is: ";
    for(const auto &i : ar) std::cout << i << " ";
    return 0;
}

