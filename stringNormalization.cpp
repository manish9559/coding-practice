#include <bits/stdc++.h>
using namespace std;
int skipSpace(const string &sentence, int index)
{
    while (index < sentence.length() and sentence[index] == ' ')
    {
        index += 1;
    }
    return index;
}
int normalization(string &sentence, int index)
{
    if (index < sentence.length() and sentence[index] != ' ')
    {
        sentence[index] = toupper(sentence[index]);
        index += 1;
    }
    while (index < sentence.length() and sentence[index] != ' ')
    {
        sentence[index] = tolower(sentence[index]);
        index += 1;
    }
    return index;
}

string stringNormalization(const string &sentence)
{
    string copy = sentence;
    int index = 0;
    while (index < copy.length())
    {
        index = skipSpace(copy, index);
        index = normalization(copy, index);
    }
    return copy;
}

int main()
{
    string str;
    getline(cin, str);
    cout << stringNormalization(str) << endl;
    return 0;
}