#include <iostream>
#include <vector>
#include <utility>
#include <iterator>
using namespace std;

int main()
{
    std::vector<std::vector<std::pair<int, int> > > vvp;
    vvp.resize(5);
    int i = 5, p =0;
    while(i--)
    {
        int u,v;
        std::cin >> u >> v;
        vvp[p].push_back(make_pair(u,v));
        ++p;
    }
    std::vector<std::vector<std::pair<int, int> > >::iterator itr1;
    std::vector<std::pair<int, int> >::iterator itr2;
    for(itr1 = vvp.begin(); itr1 != vvp.end(); itr1++)
    {
        for(itr2 = itr1->begin(); itr2 != itr1->end(); itr2++)
        {
            std::cout << itr2 -> first << " " << itr2 -> second << std::endl;
        }
    }
    return 0;
}
