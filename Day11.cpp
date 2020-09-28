#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string str;
    cin>>str;
    string temp="";
    string res="";
    temp+=str[str.length()-2];
    temp+=str[str.length()-1];
    if(temp=="AM"){
        int i=0;
        int num=0;
        for(;i<2;i++){
            num=num*10 + (str[i]-'0');
        }
        if(num+12 <24)
        res+=to_string(num);
        else{
            res+="00";
        }
        for(;i<str.length()-2;i++){
            res+=str[i];
        }
    }
    else{
        int i=0;
        int num=0;
        for(;i<2;i++){
            num=num*10 + (str[i]-'0');
        }
        if(num+12 <24)
        res+=to_string(num+12);
        else{
            res+="00";
        }
        for(;i<str.length()-2;i++){
            res+=str[i];
        }
    }
    cout<<res<<endl;
    return 0;
}