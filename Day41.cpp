#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int good(vector<int>&arr){
    int maxlen=1;
    int currlen=1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=arr[i-1]){
            currlen+=1;
        }
        else{
            maxlen=max(maxlen,currlen);
        }
    }
    maxlen=max(maxlen,currlen);
    return maxlen;
}
int main(){
    int tc;
    cin>>tc;
    for(int t=0;t<tc;t++){
        int n,q;

        cin>>n>>q;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            arr[x-1]=y;
            cout<<good(arr);
        }
    }
}