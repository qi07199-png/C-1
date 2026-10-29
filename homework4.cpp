#include <iostream>
using namespace std;
int main(){
    int x,a,b,c;
    cout<<"输入一个三位数"<<"\n";
    cin>>x;
    a=x/100;
    b=(x/10)%10;
    c=x%10;
    if(x==a*a*a+b*b*b+c*c*c){
        cout<<x<<"是水仙数";
    }
    return 0;
}