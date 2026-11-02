#include <iostream>
using namespace std;

int main() {
    int a=1;

    for (int i=9; i>= 1;i--) {
        a = (a + 1) * 2;
    }

    cout <<"第一天摘了" << a<< "个桃子\n";

    return 0;
}