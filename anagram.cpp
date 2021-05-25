#include<bits/stdc++.h>
using namespace std;
bool checkAnagram(string str1,string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
     if (n1 != n2)
        return false;
     sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
    
   return true;
}
int main()
{
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);
    
    if(checkAnagram(str1,str2))
    {
        cout<<"Given strings are anagrams to each other"<<endl;
    }
    else
    {
        cout<<"Not anagrams to each other"<<endl;
    }
    return 0;
}