#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void reverse(stack<int>&stk){
    if(stk.size()==0){
        return;
    }
    int val=stk.top();
    stk.pop();
    reverse(stk);
    stk.push(val);
}
int main(){
    int n;
    cin>>n;
    stack<int>stk;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        stk.push(val);
    }
    reverse(stk);
    while(stk.size()!=0){
        cout<<stk.top()<<endl;
        stk.pop();
    }
    return 0;
}