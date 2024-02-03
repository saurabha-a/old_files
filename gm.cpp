#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * the below function finds if there exist an arrangement such that each adjacent element in the given circular array has absolute difference of 1;
 * if exists it returns a string "YES";
 * otherwise returns a string "NO";
 */

string func(int ar[], int n) {
    vector<int> v;
    int complement;
    for(int i =0; i<n; i++) {
        complement = ar[i] +1;
        if(find(v.begin(), v.end(), ar[i]) != v.end())
            v.erase(find(v.begin(), v.end(), ar[i]));
        else
            v.push_back(complement);
    }
    if(v.empty()) return "YES";
    else return "NO";
}

int main() {
    //int ar[] = {2,4,1,1,2,2};
    int ar[] = {1,1,2,2,3};
    cout << func(ar, 5);
    cout << t;
    return 0;
}
