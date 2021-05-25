#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    // Now we are going to tokenize our string by some delimiter.
    //we are using stringstream here for tokenization.
    stringstream ss(str); // this will tokenize our input string into tokens;
    string token;
    vector<string> tokens;
    while (getline(ss, token, ' ')) //we are reading from the stringstream object and storing it into token when we are getting ' '.
    {
        tokens.push_back(token);
    }
    for (auto token : tokens)
    {
        cout << token << ",";
    }
    return 0;
}