 #include <iostream>
using namespace std;
int GCD(int x,int y){
    if(x<y){    
       int j=y;
       y=x;
       x=j;
    }
    int temp=y;
    while(x%temp!=0||y%temp!=0){
        temp--;
    }
    return temp;
}//求最大公因数
int LCM(int x,int y){
    if(x<y){
       int j=y;
       y=x;
       x=y;
    }
    int temp=x,i=2;
    while(temp%y!=0){
        temp=i*x;
        i++;
    }
    return temp;
}//求最小公倍数
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"最大公因数是"<<GCD(a,b)<<"\n"<<"最小公倍数是"<<LCM(a,b)<<"\n";
    return 0;
}