#include<iostream>
#include<stack>
#include<unordered_map>
#include<vector>
#include<string>
#include<climits>
using namespace std;


int main(){
    int n;
    cin>>n;
    stack<string>temp;
    stack<string>left;
    unordered_map<string,int>mymap;
    for(int i=0;i<n;i++){
        int exc;
        cin>>exc;
        if(exc!=-1){
            string book;
            cin>>book;
            left.push(book);
            mymap[book]=exc;
        }
        else{
            int minNo=INT_MAX;
            string ansBook="";
            while(left.size()!=0){
                
                string rn=left.top();
                left.pop();
                temp.push(rn);
                if(mymap[rn]<minNo){
                    minNo=mymap[rn];
                    ansBook=rn;
                }

            }
            int minRemoved=-1;
            bool flag=false;
            while(temp.size()!=0){
                string rn=temp.top();
                if(rn!=ansBook){
                    left.push(rn);
                }
                else if(rn==ansBook){
                    flag=true;
                }

                if(flag){
                    minRemoved+=1;
                }
                temp.pop();
            }

            cout<<minRemoved<<" "<<ansBook<< " ";
        }
    }
}