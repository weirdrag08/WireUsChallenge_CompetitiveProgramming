#include<iostream>
#include<math.h>
#define MAX 1000
using namespace std; 

void findAllSequences(int diff, char* out, int start, int end) 
{ 
    if (abs(diff) > (end - start + 1) / 2) 
        return; 
  
    if (start > end) 
    { 
        if (diff == 0) 
            cout << out << " "; 
        return; 
    } 
  
    out[start] = '0', out[end] = '1'; 
    findAllSequences(diff + 1, out, start + 1, end - 1); 
  
    out[start] = out[end] = '1'; 
    findAllSequences(diff, out, start + 1, end - 1); 
  
    out[start] = out[end] = '0'; 
    findAllSequences(diff, out, start + 1, end - 1); 
  
    out[start] = '1', out[end] = '0'; 
    findAllSequences(diff - 1, out, start + 1, end - 1); 
} 
  
int main() 
{ 
    int n;
    cin>>n;
    char out[MAX]; 
    out[2 * n] = '\0'; 
    findAllSequences(0, out, 0, 2*n - 1); 
    return 0; 
} 