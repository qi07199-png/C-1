#include <iostream>
using namespace std;

int getPower(int x, int y) {
    if (y < 0) {
        return 0;
    }
    if (y == 0) {
        return 1;
    }

    int half = getPower(x, y / 2);
    int square = half * half;
    return y % 2 == 0 ? square : square * x;
}

double getPower(double x, int y) {
    if (y == 0) {
        return 1.0;
    }

    double half = getPower(x, y / 2);
    double square = half * half;
    if (y % 2 == 0) {
        return square;
    }
    return y > 0 ? square * x : square / x;
}

int main() {
    int a, m;
    double b;

    if (!(cin >> a >> b >> m)) {
        return 0;
    }

    cout << getPower(a, m) << '\n';

    if (b == 0.0 && m < 0) {
        cout << "undefined\n";
    } else {
        cout << getPower(b, m) << '\n';
    }

    return 0;
}