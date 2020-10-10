#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int len=0;
    if(str.length()==0){
        len=0;
    }
    else{
        int i=str.length()-1;
        while(i!=0 && !isspace(str[i])){
            len+=1;
            i--;
        }     
    }
    cout<<len<<endl;

}