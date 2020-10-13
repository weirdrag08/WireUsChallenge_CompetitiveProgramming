#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int test_cases;
    cin >> test_cases;
    for(int i = 0; i < test_cases; i++){
        
        string s, result;
        unordered_map<char, int> my_map;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(my_map.count(s[i]) > 0){
                continue;
            }
            else{
                my_map[s[i]] = 1;
                result += s[i];
            }
        }
        cout << result << " "; 
    }
}
// ? <-------------------*---------------- ACTUAL CODE ENDS HERE -----------------*-------------------------------->



// ? TO REMOVE CONSECUTIVE REPEATING LETTERS(ADDITIONAL CODE)

// string s, result;
// cin >> s;
// int mark = -1;
// bool duplicate = false;
// for(int i = 0, count = 0; i < s.size(); i++){
//     if (mark == -1)
//     {
//         mark = i;
//     }
//     if(s[mark] == s[i + 1]){
//         duplicate = true;
//     }
//     else{
//         result += s[mark];
//         if(duplicate){
//             mark = i + 1;
//             duplicate = false;
//         }
//         else{
//             mark = -1;
//         }
//     }
// }
// cout << result << " ";