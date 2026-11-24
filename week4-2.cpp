#include <iostream>
#include <string>
using namespace std;

int countLetters(const string &s) {
    int count = 0;

    for (char c : s) {
        if ((c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z')) {
            count++;
        }
    }

    return count;
}

int main() {
    string s;

    cout << "请输入一条英文句子：" << endl;
    getline(cin, s);

    cout << "字母个数：" << countLetters(s) << endl;

    return 0;
}