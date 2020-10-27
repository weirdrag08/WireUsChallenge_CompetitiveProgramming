#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string reverse(string str) 
{   string out="";
    for (int i=str.length()-1; i>=0; i--) 
      out+=str[i];  

return out;
}

int main(){
    int t;
    cin>>t;
    vector<string>arr(t);
    for(int i=0;i<t;i++){
        long inp,out=0;
        cin>>inp;
        string str;
        str=to_string(inp);
        str=reverse(str);
        out=stoi(str);
        if(out==inp){
            arr[i]= "wins";
        }
        else{
            arr[i]="loses";
        }
    }

    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}