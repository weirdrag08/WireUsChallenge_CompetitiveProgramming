#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;
int main(){
    int tc;
    cin>>tc;  //2
    for(int t=0;t<tc;t++){
        int n,q;
        cin>>n>>q;  //5//3
        stack<int>stk;
        unordered_map<int,int>mymap;

        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            if(mymap.count(val)>0){
                continue;
            }
            else{
                mymap[val]=1;
                stk.push(val);
            }
        }

        for(int i=0;i<q;i++){
            int type, rl;
            cin>>type>>rl;
            if(type==1){
                for(int j=0;j<rl;j++){
                    int val;
                    cin>>val;
                    if(mymap.count(val)>0){
                        continue;
                    }
                    else{
                        mymap[val]=1;
                        stk.push(val);
                    }
                }
            }
            else if(type==2){
                for(int j=0;j<rl;j++){
                    int rn=stk.top();
                    mymap.erase(rn);
                    stk.pop();
                }
            }
        }

        while(stk.size()!=0){
            cout<<stk.top()<<" ";
            stk.pop();
        }
    }
}