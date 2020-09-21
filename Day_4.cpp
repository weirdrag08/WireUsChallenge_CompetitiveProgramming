#include<iostream>
using namespace std;

void ascii_insert(string str){
    string result = "";
    result += str[0];
    for(int i = 0; i < str.size() -  1; i++){
        result += to_string(str[i + 1] - str[i]) + str[i + 1];
    }
    cout << result << endl;
}

int main(){
    string str;
    cout << "Enter a string: " << endl;
    cin >> str;
    string result = "";
    ascii_insert(str);

}