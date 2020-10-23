#include<iostream>
#include<vector> 
using namespace std; 
  
int multiplyBy2(int n) 
{ 
    int rem, value; 
    rem = n % 10; 
    switch (rem) { 
    case 0: 
        value = 0; 
        break; 
  
    case 5: 
        value = 1; 
        break; 
  
    default: 
        value = -1; 
    } 
  
    return value; 
} 
  
int main() 
{ 
    int t;
    cin>>t;
    vector<int>ans(t);
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        ans[i]=multiplyBy2(n);    
    }
  
    for(int i=0;i<t;i++){
        cout<<ans[i]<<" ";    
    }
  return 0; 
} 