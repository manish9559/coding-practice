#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

void subsequence(string s, string o, vector<string> &v)
{
    //base case
    if (s.size() == 0)
    {
        v.push_back(o);
        return;
    }

    //recursive case
    char ch = s[0];
    string reduced_string = s.substr(1);
    //include 0th character
    subsequence(reduced_string, o + ch, v);
    subsequence(reduced_string, o, v);
}
bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 < s2;
    }
    return s1.length() < s2.length();
}
int main()
{
    string str;
    cin >> str;
    vector<string> v;
    string output = "";
    subsequence(str, output, v);
    sort(v.begin(), v.end(), compare);
    for (auto s : v)
    {
        cout << s << ", ";
    }
    return 0;
}