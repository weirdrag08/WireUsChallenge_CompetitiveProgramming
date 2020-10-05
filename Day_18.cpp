#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    vector<int> input(size), v;
    cout << "Enter " << size << " elements in the array: " << endl;
    for(int i = 0; i < size; i++){
        cin >> input[i];
        v.push_back(input[i]);
    } 

    for(int k = 0; input.size() > 1; k++){
        for (int i = 0, j = i + 1; i < input.size() - 1; j++, i++)
        {
            input[i] += input[j];
            v.push_back(input[i]);
        }
        input.pop_back();
    }
   int k = v.size() - 1;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << v[k] << " ";
            k--;
        }
        cout << endl;
    }
}