#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x;
    float y;
    cin>>x>>y;
    if(y<x){
        cout<<y<<endl;
    }
    else if(x % 5!=0){
        cout<<y<<endl;
    }
    else{
        y= y-(float)x;
        y=y-(0.50);
        cout<<y<<endl;
    }
    return 0;
}