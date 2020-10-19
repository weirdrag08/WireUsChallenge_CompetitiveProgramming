#include<iostream>
#include<vector> 
#include<stdio.h>
#include<algorithm>
#include<climits>
using namespace std; 

int findMinRec(vector<int>&arr, int i, int sumCalculated,int sumCalculated2) 
{ 
    if (i==0) 
    {
        if(sumCalculated2!=0 && sumCalculated!=0){
            return abs(sumCalculated - sumCalculated2); 
        }
        return INT_MAX;
    }
        
    return min(findMinRec(arr, i-1, sumCalculated+arr[i-1], sumCalculated2),min(
                findMinRec(arr, i-1, sumCalculated, sumCalculated2+arr[i-1]), 
                 findMinRec(arr, i-1, sumCalculated, sumCalculated2)) 
               ); 
} 
  
int findMin(vector<int>&arr, int n) 
{ 
    int sumTotal = 0; 
    for (int i=0; i<n; i++) 
        sumTotal += arr[i]; 
  
    return findMinRec(arr, n, 0,0); 
} 
  
int main() 
{ 
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>inp(n);
        for(int j=0;j<n;j++){
            cin>>inp[j];
        }
        cout<< findMin(inp, n)<<endl; 
    }   
    return 0; 
} 