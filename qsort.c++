#include <iostream>

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int partition(int ar[], int low, int high)
{
     int pivot = ar[high];
     int i = low-1;
     for(int j = low; j <= high-1; j++)
     {
         if(ar[j] <= pivot)
         {
             ++i;
             swap(ar[i], ar[j]);
         }
     }
     swap(ar[i+1], ar[high]);
     return (i+1);
}

void qsort(int ar[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(ar, low, high);
        qsort(ar, low, pi-1);
        qsort(ar, pi+1, high);
    }
    return ;
}

int main()
{
    int ar[8] = {10, 80, 30, 90, 100, 40, 50, 70};
    int low = 0, high = 7;
    qsort(ar, low, high);
	std::cout << "the sorted array is : ";
    for(int i = 0; i < 8; i++)
        std::cout << ar[i] << " ";
    return 0;
}
