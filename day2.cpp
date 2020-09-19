#include<iostream>
using namespace std;

void print_zig_zag(int* *arr, int row, int col){
    for(int j = 0; j < col; j++){
        if(j % 2 == 0){
            for(int i  = 0; i < row; i++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int i = row - 1; i >= 0; i--){
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int row, col;
    cout << "Enter the number of rows: " << endl;
    cin >> row;
    cout << "Enter the number of col: " << endl;
    cin >> col;
    int** arr = new int*[row];
    cout << "Enter " << (row * col) << " elements in the array: " << endl;
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    cout << "The zig-zag pattern for the given array: " << endl;
    print_zig_zag(arr, row, col);
}