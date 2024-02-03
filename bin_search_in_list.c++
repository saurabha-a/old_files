#include <iostream>
#include <list>
#include <iterator>

std::list<int>::iterator first, last, mid;

void mid_update(const std::list<int> &lst)
{
    std::list<int>::iterator fast = first, slow = first;
    std::advance(fast,1);
    while(fast != last)
    {
        std::advance(fast, 2);
        std::advance(slow, 1);
    }
    mid = slow;
}

bool bin_search(const std::list<int> &lst, int key)
{
    if(first != last)
    {
        mid_update(lst);
        if((*mid) == key) return true;
        else if((*mid) > key)
        {
            std::advance(mid, -1);
            last = mid;
            bin_search(lst, key);
        }
        else
        {
            std::advance(mid, 1);
            first = mid;
            bin_search(lst, key);
        }
    }
    else
    {
        if (*(last) == key || *(first) == key) return true;
        else return false;
    }
}

int main()
{
    std::list<int> lst{3, 5, 8, 13, 27, 47, 56, 78};
    int key = 5;
    first = last = lst.begin();
    std::advance(last, lst.size()-1);
    int res = bin_search(lst, key);
    if(res) std::cout << "the key is present in the sample list" << std::endl;
    else std::cout << "the key is absent in the sample list" << std::endl;
    return 0;
}
