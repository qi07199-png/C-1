#include <iostream>
using namespace std;
bool isPrime(int x){
    int i=2;
    if(x<2){
        return false;
    }
    while(i<=x/2){
        if(x%i==0){
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    int a;
    cin>>a;
    if(isPrime(a)){
        cout<<a<<"是素数"<<"\n";
    }
    else{
        cout<<a<<"不是素数"<<"\n";
    }
    return 0;
}