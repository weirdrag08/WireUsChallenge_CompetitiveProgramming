#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    bool dir=true;
    int idx=0;
    while(idx<col){
        if(dir){
            for(int i= 0;i<row;i++){
                cout<<arr[i][idx]<<",";
            }
            dir=false;
        }
        else if(!dir){
            for(int i= row-1;i>=0;i--){
                cout<<arr[i][idx]<<",";
            }
            dir=true;
        }
        idx++;
    }
    cout<<"END";
    return 0;
}