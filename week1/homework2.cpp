#include <iostream>
using namespace std;
int main(){
    int score=0;
    while(score!=-1){
    cout<<"输入分数 （输入-1退出程序）"<<"\n";
    cin>>score;
    if(score<5&&score>=0){
        cout<<"我认为电影是烂片"<<"\n";
    }
    else if(score<=8&&score>=7){
        cout<<"我认为电影非常好"<<"\n";
    }
    else if(score<=6&&score>=5){
        cout<<"我认为电影很一般"<<"\n";
    }
    else if(score<=10&&score>=9){
        cout<<"我认为电影是一部经典"<<"\n";
    }
}
    return 0;
}