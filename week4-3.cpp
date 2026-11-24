#include <iostream>
#include <string>
using namespace std;

void reverse(string &s) {
    if (s.length() <= 1) {
        return;
    }

    char c = s[0];     
    s = s.substr(1);  

    reverse(s);      
    s += c;           

int main() {
    string s;

    cout << "请输入字符串：" << endl;
    getline(cin, s);

    reverse(s);

    cout << "倒序后：" << s << endl;

    return 0;
}