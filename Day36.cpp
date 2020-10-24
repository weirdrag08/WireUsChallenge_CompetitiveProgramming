#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;
 
int gcd(int x, int y)
{
    int r = 0, a, b;
    a = (x > y) ? x : y; 
    b = (x < y) ? x : y; 
 
    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
 
int lcm(int x, int y)
{
    int a;
    a = (x > y) ? x : y; 
    while (true)
    {
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}

int main(int argc, char **argv)
{
    int t;
    cin>>t;
    vector<int>arr;
    for(int i=0;i<t;i++){
        int x, y;
        cin >> x >> y;
        arr.push_back(gcd(x,y));
        arr.push_back(lcm(x,y));
    }
    for(int i=0;i<(2*t);i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}