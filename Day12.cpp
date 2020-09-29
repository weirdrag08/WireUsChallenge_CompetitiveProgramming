#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>span(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int>stk;
    stk.push(0);
    span[0]=1;
    for(int i=1;i<n;i++){
        while(stk.size()!=0 && arr[stk.top()]<=arr[i]){
            stk.pop();
        }
        if(stk.size()==0){
            span[i]=i+1;
        }
        else if(arr[stk.top()]>arr[i]){
            int idx=stk.top();
            int count=i-idx;
            span[i]=count;
        }
        stk.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
    cout<<"END";
    return 0;
}