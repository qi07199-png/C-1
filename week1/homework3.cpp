#include <iostream>
using namespace std;
int main(){
    int x,y=0;
    cout<<"输入一个整数"<<"\n";
    cin>>x;
    int temp=x;
    while(x>0){
        y=10*y+x%10;
        x=x/10;
    }
    if(temp==y){
        cout<<temp<<"是回文数";
    }

    return 0;
}