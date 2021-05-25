#include<bits/stdc++.h>
using namespace std;
char findRepeatingElement(char *str)
{
    int len = strlen(str);
    int count[256];
    for (int i = 0; i < len; i++)
    {
            count[i] = 0;
        for (int i = 0; i < len; i++)
        {
            if(count[str[i]] == 1)
            {
                return str[i];
                break;
            }
            else count[str[i]]++;
        }
        if(i == len)
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    cout<<findRepeatingElement(str);
    return 0;

}