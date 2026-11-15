#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
using namespace std;
class X;                 

class Y {
public:
    void g(X *p);         
};
class X{
    public:
    void show()const{
        cout<<i<<endl;
    }
    friend void h(X*);
    friend class Z;
    friend void Y::g(X*);
    private:
    int i=0;
};
void Y::g(X *p) { p->i += 1; } 
class Z{
    public:
    void f(X*p){
        p->i+=5;
    }
};
void h(X*p){
    p->i+=10;
}
#endif