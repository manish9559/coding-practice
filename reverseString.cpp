#include <bits/stdc++.h>
using namespace std;
string reverseString(string str)
{
    /*string s = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        s += str[i]; 
    }
    return s;*/
    reverse(str.begin(), str.end()); //built in function for reversing the string.
    return str;
}
int main()
{
    string str;
    cin >> str;
    cout << "Before reversal: " << str << endl;
    cout << "After reversal: " << reverseString(str);
    return 0;
}