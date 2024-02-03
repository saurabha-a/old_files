#include <iostream>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void selection_sort(int ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int min_index  = i;
        for(int j = i+1; j < n; j++)
        {
            if(ar[j] < ar[min_index])
            {
                min_index = j;
            }
        }
        swap(&ar[i], &ar[min_index]);
    }
}
int main()
{
    int ar[] = {64, 24, 12, 22, 16, 56, 45, 49, 18, 11};
    selection_sort(ar, 10);
    for(const auto &i : ar) std::cout << i << " ";
    return 0;
}
