#include<iostream>
using namespace std;

struct prog {
    int (*ptr)(int, int);
    void (*tptr)(double, int);
};

int mvp(int p, int r) {
    int res = p*r;
    return res;
}

void mvb(double t, int ty) {
    cout << t+ty << endl;
}

struct prog pr {mvp, mvb};

int main() {
    int x = 90, y = 10;
    cout << (*pr.ptr)(x, y) << endl;
    (*pr.tptr)(78.98, 67);
    cout << "This is done at all costs" << endl;
    return 0;
}
