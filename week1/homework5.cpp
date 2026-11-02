#include <iostream>
using namespace std;
int main(){
    int a,n,sum=0;
    cout<<"输入两个正整数"<<"\n";
    cin>>a>>n;
    for(int i=1;i<=n;i++){
        sum=sum*10+a*i;
    }
    cout<<sum;
    return 0;
}