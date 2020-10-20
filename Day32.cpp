#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,p,w;
        cin>>m>>p>>w;
        int sum=0;
        for(int j=0;j<m;j++){
            int val;
            cin>>val;
            sum+=val;
        }
       int avg=((w*(m+p))-sum);
       avg=avg/p;
       if(avg<0){
           cout<<-1<<" ";
       }
       else{
           cout<<avg<<" ";
       }
    }
    return 0;
}