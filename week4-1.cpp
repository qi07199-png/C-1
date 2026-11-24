#include <iostream>
using namespace std;

class SimpleCircle {
private:
    int *itsRadius;

public:
    SimpleCircle(int r = 0) {
        itsRadius = new int(r);
    }

    SimpleCircle(const SimpleCircle &c) {
        itsRadius = new int(*c.itsRadius);
    }

    SimpleCircle &operator=(const SimpleCircle &c) {
        *itsRadius = *c.itsRadius;
        return *this;
    }

    ~SimpleCircle() {
        delete itsRadius;
    }

    void setRadius(int r) {
        *itsRadius = r;
    }

    int getRadius() const {
        return *itsRadius;
    }

    double getArea() const {
        return 3.14159 * (*itsRadius) * (*itsRadius);
    }

    double getLength() const {
        return 2 * 3.14159 * (*itsRadius);
    }
};

int main() {
    SimpleCircle c1(3);
    SimpleCircle c2(c1);  
    SimpleCircle c3;
    c3 = c1;           

    c1.setRadius(5);

    cout << "c1的半径：" << c1.getRadius() << endl;
    cout << "c1的面积：" << c1.getArea() << endl;
    cout << "c1的周长：" << c1.getLength() << endl;#include <iostream>
using namespace std;

class SimpleCircle {
private:
    int *itsRadius;

public:
    // 构造函数
    SimpleCircle(int r = 0) {
        itsRadius = new int(r);
    }

    // 复制构造函数：另外申请空间，保存半径
    SimpleCircle(const SimpleCircle &c) {
        itsRadius = new int(*c.itsRadius);
    }

    // 赋值：复制半径的值
    SimpleCircle &operator=(const SimpleCircle &c) {
        *itsRadius = *c.itsRadius;
        return *this;
    }

    // 析构函数：释放空间
    ~SimpleCircle() {
        delete itsRadius;
    }

    void setRadius(int r) {
        *itsRadius = r;
    }

    int getRadius() const {
        return *itsRadius;
    }

    double getArea() const {
        return 3.14159 * (*itsRadius) * (*itsRadius);
    }

    double getLength() const {
        return 2 * 3.14159 * (*itsRadius);
    }
};

int main() {
    SimpleCircle c1(3);
    SimpleCircle c2(c1);  // 测试复制构造
    SimpleCircle c3;
    c3 = c1;              // 测试赋值

    c1.setRadius(5);

    cout << "c1的半径：" << c1.getRadius() << endl;
    cout << "c1的面积：" << c1.getArea() << endl;
    cout << "c1的周长：" << c1.getLength() << endl;

    // c1改变后，c2和c3的半径仍然是3
    cout << "c2的半径：" << c2.getRadius() << endl;
    cout << "c3的半径：" << c3.getRadius() << endl;

    return 0;
}#include <iostream>
using namespace std;

class SimpleCircle {
private:
    int *itsRadius;

public:
    // 构造函数
    SimpleCircle(int r = 0) {
        itsRadius = new int(r);
    }

    // 复制构造函数：另外申请空间，保存半径
    SimpleCircle(const SimpleCircle &c) {
        itsRadius = new int(*c.itsRadius);
    }

    // 赋值：复制半径的值
    SimpleCircle &operator=(const SimpleCircle &c) {
        *itsRadius = *c.itsRadius;
        return *this;
    }

    // 析构函数：释放空间
    ~SimpleCircle() {
        delete itsRadius;
    }

    void setRadius(int r) {
        *itsRadius = r;
    }

    int getRadius() const {
        return *itsRadius;
    }

    double getArea() const {
        return 3.14159 * (*itsRadius) * (*itsRadius);
    }

    double getLength() const {
        return 2 * 3.14159 * (*itsRadius);
    }
};

int main() {
    SimpleCircle c1(3);
    SimpleCircle c2(c1);  // 测试复制构造
    SimpleCircle c3;
    c3 = c1;              // 测试赋值

    c1.setRadius(5);

    cout << "c1的半径：" << c1.getRadius() << endl;
    cout << "c1的面积：" << c1.getArea() << endl;
    cout << "c1的周长：" << c1.getLength() << endl;

    // c1改变后，c2和c3的半径仍然是3
    cout << "c2的半径：" << c2.getRadius() << endl;
    cout << "c3的半径：" << c3.getRadius() << endl;

    return 0;
}
    cout << "c2的半径：" << c2.getRadius() << endl;
    cout << "c3的半径：" << c3.getRadius() << endl;

    return 0;
}