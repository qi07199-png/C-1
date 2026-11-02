#include<iostream>
using namespace std;
int main()
{
    double x;
    double bonus=0;
    cout<<"请输入营收为 （万元）"<<"\n";
    cin>>x;
    if(x<=10){
        bonus=x*0.1;
    }
    else if(10<x&&x<=20){
        bonus=1+(x-10)*0.075;
    }
    else if(x>20&&x<=40){
        bonus= 1+0.75+(x-20)*0.05;
    }
    else if(x>40&&x<=60){
        bonus=1+0.75+1+(x-40)*0.03;
    }
    else if(x>60&&x<=100){
        bonus=1+0.75+1+0.6+(x-60)*0.015;
    }
    else if(x>100){
        bonus=1+0.75+1+0.6+0.6+(x-100)*0.01;
    }
    cout<<"奖金为"<<bonus<<"万元";
    return 0;
}