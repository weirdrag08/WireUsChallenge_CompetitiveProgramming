#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        vector<int>inp(n);
        for(int i=0;i<n;i++){
            cin>>inp[i];
        }
        for(int i=1;i<n;i++){
            if(inp[i]==inp[i-1]){
                continue;
            }
            else{
                cout<<inp[i-1]<<" ";
            }
        }
        cout<<inp[n-1]<<" ";
        
    }
    return 0;
}