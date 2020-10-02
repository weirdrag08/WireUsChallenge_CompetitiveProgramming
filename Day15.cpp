#include<iostream>
#include<string>
using namespace std;

int convert(string str){
    if(str.length()==1){
        return str[0]-'0';
    }
    int smallnum=str[str.length()-1]-'0';
    int num=convert(str.substr(0,str.length()-1));
    num=num*10+ smallnum;
    return num;
}
int main(){
    string str;
    cin>>str;
    int output=convert(str);
    cout<<output<<endl;
    return 0;
}