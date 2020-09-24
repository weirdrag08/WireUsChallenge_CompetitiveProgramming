#include <iostream>
using namespace std;

// O(n) complexity
void reduce_string(string s)
{
    int count;
    char mark;
    string result = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            mark = s[i];
            count = 1;
            int j = i + 1;
            for (; s[j] == mark; j++)
            {
                count++;
            }
            result += s.substr(i, 1) + to_string(count);
            i = j - 1;
        }
        else
        {
            result += s[i];
        }
    }
    cout << result << endl;
}

int main()
{
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;
    reduce_string(s);
}