#include<iostream> 
#include<vector>
using namespace std; 
  

  
int main() 
{  
    int n;
    cin>>n;
    int k, count=0;
    cin>>k;
    for(int i=0;i<n;i++){
        long long val;
        cin>>val;
        if(val % k ==0){
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0; 
} 