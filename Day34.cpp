#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>res(t);
        for(int i=0;i<t;i++){
        priority_queue<int>pq;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int val;
            cin>>val;
            pq.push(val);
        }
        int l=-1, b=-1;
        bool flagL=false;
        bool flagB=false;
        while(pq.size()!=0 && (!flagL|| !flagB)){
            int rn=pq.top();
            pq.pop();
            if(!flagL && rn!=l){
                l=rn;
            }
            else if(!flagL && rn==l){
                    flagL=true;
            }
            else if(flagL && !flagB && b!=rn){
                b=rn;
            }
            else if(flagL && !flagB && b==rn){
                flagB=true;
            }
        }
        int area=0;
        if(!flagL || !flagB){
            area=-1;
        }
        else{
            area=l*b;
        }

        res[i]=area;
    }

    for(int j=0;j<t;j++){
        cout<<res[j]<<" ";
    }
    return 0;
}