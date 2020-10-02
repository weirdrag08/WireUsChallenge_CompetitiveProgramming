#include<iostream>
#include<math.h>
using namespace std;

int string_to_int(string s){
    if(s.size() == 1){
        return s[0] - '0';
    }
    int digit_sum = ((s[0] - '0') * pow(10, (s.size() - 1)));
    return digit_sum + string_to_int(s.substr(1));
}

int main(){
    string s;
    cin >> s;
    int number = string_to_int(s);
    cout << number << endl;
}
