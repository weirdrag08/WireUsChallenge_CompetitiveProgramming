#include<iostream> 
#include<map>
#include<vector>
using namespace std; 
map<int, int> h; 
  
void numberWithNoConsecutiveOnes(int n, vector<int>  
                                              sol) 
{ 
    if (sol.size() <= n) { 
        int ans = 0; 
        for (int i = 0; i < sol.size(); i++) 
            ans += pow((double)2, i) *  
                   sol[sol.size() - 1 - i]; 
        h[ans] = 1; 
  
        int last_element = sol[sol.size() - 1]; 
  
        if (last_element == 1) { 
            sol.push_back(0); 
            numberWithNoConsecutiveOnes(n, sol); 
        } else { 
            sol.push_back(1); 
            numberWithNoConsecutiveOnes(n, sol); 
            sol.pop_back(); 
            sol.push_back(0); 
            numberWithNoConsecutiveOnes(n, sol); 
        } 
    } 
} 
  
int main() 
{ 
    int n = 4; 
    vector<int> sol; 
    sol.push_back(1); 
    numberWithNoConsecutiveOnes(n, sol); 
  
    for (map<int, int>::iterator i = h.begin(); 
                            i != h.end(); i++) 
        cout << i->first << " "; 
    return 0; 
} 