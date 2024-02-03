#include <iostream>

void insertion_sort(int ar[], int n) {
    for(int i =1; i<= n; i++){
        if(ar[i-1] > ar[i]){
            int j = i-1;
            while(ar[j]>ar[j+1] && j>=0) {
                int key = ar[j+1];
                ar[j+1] = ar [j];
                ar[j] = key;
                j--;
            }
        }

    }

}
int main (){
    int ar[] = {23, 3, 45, 6, 67, 8, 4, 98};
    insertion_sort(ar, 8);
    for(int i=0;i <8;i++) std::cout << ar[i] << " ";
    return 0;
}
