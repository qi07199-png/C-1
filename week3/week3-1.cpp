#include <iostream>
using namespace std;

class Cat {
public:
    Cat()  { numOfCats++; }            
    ~Cat() { numOfCats--; }            
    static int getNumOfCats() {        
        return numOfCats;
    }
private:
    static int numOfCats;             

int Cat::numOfCats = 0;               

int main() {
    cout << "开始时: " << Cat::getNumOfCats() << endl;  

    Cat c1, c2;
    cout << "创建 2 只后: " << Cat::getNumOfCats() << endl;

    {
        Cat c3;
        cout << "块内再建 1 只: " << Cat::getNumOfCats() << endl;
    }  

    cout << "块结束后: " << c1.getNumOfCats() << endl;  
    return 0;
}