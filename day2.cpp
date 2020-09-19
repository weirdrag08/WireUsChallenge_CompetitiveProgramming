#include<iostream>
using namespace std;

void camel_case_print(string str){
    for(int i = 0; i < str.size(); i++){
        if((str[i] >= 'A' && str[i] <= 'Z') && i != 0){
            cout << endl;
        }
        cout << str[i];
    }
}

int main(){
    string str;
    cout << "Enter a string: " << endl;
    cin >> str;
    camel_case_print(str); 
    cout << endl;
}
