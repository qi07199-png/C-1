#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 1;  

    for (int month = 1; month <= 20; month++) {
        cout << "第" << month << "个月：" << a << "对兔子\n";

        int temp = a + b;  
        a = b;             
        b = temp;          
    }

    return 0;
}