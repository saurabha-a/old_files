#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
    return ;
}

void merge(int sample[], int left, int right)
{
    for(int i = left; i <= right; i++)
    {
        for(int j = right; j > i; j--)
        {
            if(sample[i] > sample[j]) swap(sample[i], sample[j]);
        }
    }
}

void merge_sort(int sample[], int left, int right)
{
    if(right>left)
    {
        int mid = (left+right) /2;
        merge_sort(sample ,left, mid);
        merge_sort(sample, mid+1, right);
    }
    merge(sample, left, right);
    return ;
}

int main()
{
    int sample[] = {11, 3, 23, 34, 4, 7, 56, 67, 63, 78, 73, 79, 98, 89, 14, 24, 48, 62, 2, 36, 97};
    int n = sizeof(sample)/sizeof(int);
    merge_sort(sample, 0, n-1);
    for(auto &i : sample) cout << i << " ";
    return 0;
}
