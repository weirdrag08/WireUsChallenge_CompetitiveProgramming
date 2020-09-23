#include <iostream>
using namespace std;

// First Method (Relatively less rules to write) (SHORTER AND CLEANER CODE)
void remove_duplicate(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            char mark = s[i];
            int j = i + 1;
            for (; s[j] == mark; j++)
            {
                s[j] = '*';
            }
            i = j - 1;
        }
    }
    cout << s << endl;
}

// Second method (Based on if else)
void remove_duplicate_2(string s)
{

    char mark;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] != s[i] && s[i - 1] != '*')
        {
            continue;
        }
        else if (s[i - 1] == s[i] && s[i - 1] != '*')
        {
            mark = s[i - 1];
            s[i] = '*';
        }
        else if (s[i - 1] != s[i] && s[i - 1] == '*')
        {
            if (s[i] == mark)
            {
                s[i] = '*';
            }
            continue;
        }
    }
    cout << s << endl;
}

int main()
{
    string str;
    cout << "Enter a string: " << endl;
    cin >> str;
    remove_duplicate(str);
}