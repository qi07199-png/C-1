#include "classes.h"

int main() {
    X x;
    Y y;
    Z z;

    x.show();      // i = 0
    y.g(&x);       // 友元成员函数，+1
    x.show();      // i = 1
    z.f(&x);       // 友元类的成员函数，+5
    x.show();      // i = 6
    h(&x);         // 友元函数，+10
    x.show();      // i = 16
    return 0;
}