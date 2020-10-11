#include<iostream>
using namespace std;

int match_finder(string input, string match){
    int mark = -1;
    bool found = false;
    if(match == ""){
        return 0;
    }
    for(int i = 0, j = 0; i < input.size(); i++){
        if(input[i] == match[j]){
            if(j == 0){
                mark = i;
            }
            j++;
            if(j == match.size()){
                found = true;
                break;
            }
        }
        else
        {
           j = 0;
           mark = -1;
        }
    }
    if(found){
        return mark;
    }
    else{
        return -1;
    }
}

int main(){
    string input = "", match = "";
    cout << "Enter a string: " << endl;
    cin >> input;
    cout << "Enter the string for which you want to find it in the original string: " << endl;
    cin >> match;
    int index = match_finder(input, match);
    cout << "The index where the resemblance started: " << index << endl;
}