#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int sum_without_carry(int a, int b){
        int ans = 0; 
        int multiply = 1; 
        int sum; 

        while (a || b) { 
            sum = (a % 10) + (b % 10);   
            sum %= 10; 
            ans = (sum * multiply) + ans; 
            a=a/10; 
            b=b/10; 
            multiply=multiply* 10; 
        } 
        return ans;
}

int main(){
    int t;
    cin>>t;
    vector<int>res(t);
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        res[i]=sum_without_carry(a,b);
    }
    for(int j=0;j<t;j++){
        cout<<res[j]<<" ";
    }
    return 0;
}