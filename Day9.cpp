#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    vector<int>input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int s=0, e=n-1;
    while(s<=e){
        int temp=input[s];
        input[s]=input[e];
        input[e]=temp;
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    return 0;
}