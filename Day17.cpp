#include<iostream>
#include<string>
#include<vector>
using namespace std;

int subsequences(string ques,string arr[]){
    if(ques.empty()){
        arr[0]="";
        return 1;
    }
    char ch=ques[0];
        int count=subsequences(ques.substr(1),arr);
    for(int i=0;i<count;i++){
        arr[i+count]=ques[0]+arr[i];
    }
    return 2*count;
}

vector<string> lexicographic(string arr[],int n){
    string temp="";
     for (int i = 0; i<n-1 ; ++i){
        for (int j = i + 1; j<n; ++j) {
            if(arr[i]>arr[j]){
                 arr[i].swap(arr[j]);
            }
        }
    }
    vector<string> ans;
    for(int i=0;i<n;i++){
        if(arr[i]!=""){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

vector<string>buildSubsequences(string s){
    string *arr=new string[10000000];
    int count=subsequences(s,arr);
    vector<string> ans= lexicographic(arr,count);
    return ans;
}
int main(){
    string str="abc";
    vector<string> res=buildSubsequences(str);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}