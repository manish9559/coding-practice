#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "akjnjdasjnajshjhjdahjkajndakj";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        /* code */
        freq[i] = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        freq[s[i] - 'a']++;
    }
    int maxF = 0;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        /* code */
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout << ans << " " << maxF << endl;
    return 0;
}