#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
string extractStringKey(string str, int key)
{
    char *token = strtok((char *)str.c_str(), " "); // c_str() converts the string into c type character because strtok() is only working with character array.
    while (key > 1)
    {
        token = strtok(NULL, " ");
        key--;
    }
    return string(token);
}
int convertToInt(string key)
{
    int ans = 0;
    int p = 1;
    for (int i = key.length() - 1; i >= 0; i--)
    {
        ans += ((key[i] - '0') * p);
        p = p * 10;
    }
}
bool lexicoCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1 = s1.second;
    string key2 = s2.second;
    return key1 < key2;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1 = s1.second;
    string key2 = s2.second;
    return convertToInt(key1) < convertToInt(key2);
}

int main()
{
    int n;
    cin >> n;
    cin.get(); //consume the extra \n.
    string str;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        getline(cin, str);
        v.push_back(str);
    }
    int key;
    string reversal, ordering;
    cin >> key >> reversal >> ordering;

    //1. Extract keys for the comparision & store them.
    vector<pair<string, string>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.push_back({v[i], extractStringKey(v[i], key)});
    }
    // 2. sorting
    if (ordering == "numeric")
    {
        sort(vp.begin(), vp.end(), numericCompare);
    }
    else
    {
        sort(vp.begin(), vp.end(), lexicoCompare);
    }
    if (reversal == "true")
    {
        reverse(vp.begin(), vp.end());
    }
    for (int i = 0; i < n; i++)
    {
        cout << vp[i].first << endl;
    }
    return 0;
}