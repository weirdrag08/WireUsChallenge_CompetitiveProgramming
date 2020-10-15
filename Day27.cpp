#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string, int>mymap;
    priority_queue<string, vector<string>, greater<string>>pq;
    for(int i=0;i<n;i++){
        string str="";
        cin>>str;
        if(mymap.count(str)>0){
            mymap[str]+=1;
        }
        else{
            mymap[str]=1;
            pq.push(str);
        }
    }
    while(pq.size()!=0){
        string rn=pq.top();
        pq.pop();
        cout<<rn<<" "<<mymap[rn]<<" ";
    }
}