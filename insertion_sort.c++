#include <iostream>
#include <array>

class Solution
{
  private:
    std::array<int, 22> ar {8, 9, 2, 4, 12, 3, 16, 34, 24, 56, 76, 65, 78, 89, 6, 32, 11, 18, 13, 98, 73, 91};
  public:
    Solution()
    {
    }
   /*
    void insertion_sort()
    {
        for( int i =1; i<= ar.size(); i++)
        {
            if(ar[i-1] > ar [i])
            {
                int key = ar[i];
                int j = i-1;
                while(j != 0 && ar[j] > key)
                {
                    ar[j+1] = ar[j];
                    ar[j] =  key;
                    j--;
                }
            }
        }

    }
    */
    void insertion_sort() {
    int s = 1;
    while(22-s != 0)
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
    void print()
    {
        for(int i = 0; i < ar.size(); i++)
        std::cout << ar[i] << " ";
    }
};

int main()
{
    Solution obj = Solution();
    obj.insertion_sort();
    obj.print();

    return 0;
}
