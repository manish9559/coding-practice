#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool isSubsetstring(string s1, string s2)
{
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    while (i >= 0 and j >= 0)
    {
        if (s1[i] == s2[j])
        {
            i--;
            j--;
        }
        else
            i--;
    }
    if (j == -1)
    {
        return true;
    }
    return false;
}
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << isSubsetstring(str1, str2) << endl;
    return 0;
}