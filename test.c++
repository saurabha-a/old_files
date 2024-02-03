#include <iostream>
#include <cstring>

using namespace std;

unsigned long int fib_mem(int, unsigned long int *);

int main() {
    int n;
    unsigned long int lookup_table[100];
    memset(lookup_table, -1, sizeof(lookup_table));
    unsigned long int fibonacci_mem;
    cout << "enter the no to fibo_nacci less than 100 ofcourse\n";
    cin >> n;
    fibonacci_mem = fib_mem(n, lookup_table);
    cout << fibonacci_mem << endl;
    return 0;
}

unsigned long int fib_mem(int n, unsigned long int lookup_table[]) {
    if(lookup_table[n] == -1) {
        if(n <= 1)
            lookup_table[n] = n;
        else
            lookup_table[n] = fib_mem(n-1, lookup_table) + fib_mem(n-2, lookup_table);
    }
    return lookup_table[n];
}
