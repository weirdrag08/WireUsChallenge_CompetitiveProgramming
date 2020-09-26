#include<iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    int *output = new int[size];
    for(int i = size - 1; i >= 0; i--){
        cin >> output[i];
    }
    for(int i = 0; i < size; i++){
        cout << output[i] << " ";
    }
    cout << endl;
}