#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<string>ans;
    string res="";
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch>=65 && ch<=90){
            ans.push_back(res);
            res="";
        }
        else if(i==str.length()-1){
            res+= str[i];
            ans.push_back(res);
            res="";
        }
        res+=ch;
    }
    for(int i=1;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}