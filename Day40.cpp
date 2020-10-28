#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    vector<int>res(tc);
    for(int t=0;t<tc;t++){
        int n;
        cin>>n;
        vector<vector<int>>arr(n, vector<int>(n, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin>>arr[i][j];
            }
        }
        vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j>=0;j--){
                dp[i][j]= max(dp[i+1][j], dp[i+1][j+1]) + arr[i][j];
            }
        }

        res[t]=dp[0][0];
    }
    for(int t=0;t<tc;t++){
        cout<<res[t]<<" ";
    }
    return 0;
}