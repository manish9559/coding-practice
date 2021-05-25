#include <iostream>
#include <cstring>
using namespace std;
void replace_space(char *s)
{
    int spaces = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            spaces += 1;
        }
    }
    int index = strlen(s) + 2 * spaces;
    s[index] = '\0';
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            s[index - 1] = '0';
            s[index - 2] = '2';
            s[index - 3] = '%';
            index = index - 3;
        }
        else
        {
            s[index - 1] = s[i];
            index--;
        }
    }
}

int main()
{
    char s[10000];
    cin.getline(s, 10000);
    replace_space(s);
    cout << s << endl;
    return 0;
}