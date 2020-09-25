#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    string input, query;
    int word_size, queries_size;
    unordered_map<string, int> my_map;
    cout << "Enter the number of input strings: " << endl;
    cin >> word_size;
    cout << "Enter " << word_size << " input strings: " << endl;
    for (int i = 0; i < word_size; i++)
    {
        cin >> input;
        if (my_map.count(input) > 0)
        {
            my_map[input]++;
        }
        else
        {
            my_map[input] = 1;
        }
    }

    cout << "Enter the number of query strings: " << endl;
    cin >> queries_size;
    string *output = new string[queries_size];
    cout << "Enter " << queries_size << " query strings: " << endl;
    for (int i = 0; i < queries_size; i++)
    {
        cin >> output[i];
    }
//     cout << "The occurence of the queries in the input string: " << endl;
    for (int i = 0; i < queries_size; i++)
    {
        if (my_map.count(output[i]) > 0)
        {
//             cout << output[i] << ": " << my_map[output[i]] << endl;
               cout << my_map[output[i]] <<endl;
        }
        else
        {
//             cout << output[i] << ": 0" << endl;
               cout << "0" << endl;
        }
    }
}
