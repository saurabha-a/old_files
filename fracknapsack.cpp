#include <iostream>
#include <algorithm>

struct Item {
    int weight;
    int val;
    Item(int v, int w) {
        this->weight = w;
        this->val = v;
    }
};

 bool cmp(struct Item a, struct Item b) {
      double r1, r2;
      r1 = (double)a.val / (double)a.weight;
      r2 = (double)b.val / (double)b.weight;
      return r1 > r2;
 }

 double knapsack(struct Item ar[],int n, int w) {
     std::sort(ar, ar+n, cmp);
     int curweight = 0;
     double finalval = 0.0;
     for(int i = 0; i < n; i++) {
         if(curweight + ar[i].weight <= w) {
             curweight += ar[i].weight;
             finalval += ar[i].val;
         }
         else {
             int remain = w-curweight;
             finalval += ar[i].val *((double) remain / (double)ar[i].weight);
             break;
         }
     }
     return finalval;
 }

 int main() {
     int w = 50;
     struct Item ar[] = {{60,10},{100,20},{120,30}};
     int n = sizeof(ar)/ sizeof(ar[0]);
     std::cout << knapsack(ar,n,w) << std::endl;
     return 0;
 }
