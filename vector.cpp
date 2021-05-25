#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(10);
    for (int i = 0; i < 10; i++)
    {
        a[i] = i + 1;
        /* code */
    }
    cout << a.at(6) << endl;
    cout << a.back() << endl;
    int d = a.front();
    d++;
    cout << d;

    return 0;
}