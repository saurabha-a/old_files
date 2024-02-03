#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#define ui unsigned int
#define sysout(...) printf(__VA_ARGS__)
//#define sysout printf
#define m main()

int m {
    std::vector<std::pair<int, char>> vec;
    vec.push_back(std::make_pair(34, 'b'));
    vec.push_back(std::make_pair(54, 'c'));
    int i =0;
    std::cout << vec.at(i+1).second;
    int t = -76;
    sysout("\n%d\n", t);
    unsigned long long s = (unsigned long long)pow(2, 128) -1 ;
    std::cout << s;
    return 0;
}
