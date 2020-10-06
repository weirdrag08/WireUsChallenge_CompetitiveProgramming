#include<iostream> 
using namespace std; 
  
int binary_to_gray(int n) 
{  
    if (!n)  
        return 0; 
  
    int a = n % 10;  
      
    int b = (n / 10) % 10;  
          
    if ((a && !b) || (!a && b))          
            return (1 + 10 * binary_to_gray(n / 10)); 
                      
    return (10 * binary_to_gray(n / 10)); 
} 
  
int main() 
{ 
    int binary_number = 1011101; 
      
    printf("%d", binary_to_gray(binary_number)); 
    return 0; 
} 