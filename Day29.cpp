#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int sum=0;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        sum=sum+val;
    }
    cout<<sum<<endl;
}
