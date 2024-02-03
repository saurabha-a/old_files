#include <iostream>

void nsrtonsort(int ar[], int n)
{
    int s = 1;
    while(n-s != 0)
    {
        if(ar[s-1] > ar[s])
        {
            for(int i = s; i > 0; i--)
            {
                int temp = ar[i];
                ar[i] = ar[i-1];
                ar[i-1] = temp;
                if(ar[i-2] < temp) break;
            }
        }
        s++;
    }
}

int main()
{
    int ar[] = {8, 15, 18, 2, 4, 16, 9, 21};
    nsrtonsort(ar, 8);
    for(int i = 0; i < 8; i++) std::cout << ar[i] << " ";
    return 0;
}
