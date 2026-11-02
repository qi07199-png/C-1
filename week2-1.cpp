#include <iostream>
using namespace std;
short int divide(unsigned short int x,unsigned short int y){
    if(y==0){
        return -1;
    }
    return x/y;
}
int main(){
    unsigned short int a,b;
    cin>>a>>b;
    short int c=divide(a,b);
    cout<<c<<"\n";
    return 0;
}