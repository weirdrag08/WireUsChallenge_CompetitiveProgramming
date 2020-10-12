#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        vector<vector<string>>inp(n,vector<string>(2, ""));
        unordered_map<string,int>mymap;
        for(int i=0;i<n;i++){
            cin>>inp[i][0]>>inp[i][1];
            mymap[inp[i][0]]+=1;
        }
        for(int i=0;i<n;i++){
            if(mymap[inp[i][0]]>1){
                cout<<inp[i][0]<<" "<<inp[i][1]<<endl;
            }
            else{
                cout<<inp[i][0]<<endl;
            }
        }
    }
    return 0;
}