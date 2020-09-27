#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int size, left_rotations, right_rotations, element;
    //cout << "Enter the size of the array: " << endl;
    cin >> size;
    //cout << "Enter the number of left rotations: " << endl;
    cin >> left_rotations;
    left_rotations = left_rotations % size;
    right_rotations = size - left_rotations;
    vector<int> v(size);
    if(right_rotations < left_rotations){
        int j = 0;
        //cout << "Enter " << size << " elements in the array: " << endl;
        for(int i = 0; i < size; i++){
            cin >> element;
            if(i < left_rotations){
                v[i + right_rotations] = element;
            }
            else{
               v[j] = element;
               j++;
            }
        }
    }
    else{
        int j = size - left_rotations;
        // cout << "Enter " << size << " elements in the array: " << endl;
        for(int i = 0; i < size; i++){
            cin >> element;
            if(i < left_rotations){
                v[j] = element;
                j++;
            }
            else{
                v[i - left_rotations] = element;
            }
        }
    }
    //cout << "The array after " << left_rotations << " left rotations: " << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}