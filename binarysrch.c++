#include <iostream>

int bin_srch(int ar[],int key,int f,int l){
	    if(l>=f){
            int m = l + (f - l) /2;
            if (ar[m] == key) return m;
            if (ar[m] > key) return bin_srch(ar,key,f,m-1);
            else return bin_srch(ar,key,m+1,l);
        }
	    else return -1;
}

int main(){
	    int ar[9]={94, 98, 99, 103, 105, 108, 110, 123, 194};
	    int rslt = bin_srch(ar, 108, 0, 8);
	    if(rslt == -1) std::cout << "key not found";
	    else std::cout << "the key is found at index: " << rslt;
	    return 0;
}
