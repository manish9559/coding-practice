#include <bits/stdc++.h>
using namespace std;
template <class T>
T Large(T n, T m)
{
    return (n > m) ? n : m;
}
int main()
{
    int a = 10, b = 56;
    float c = 3.14, d = 9.34;

    cout << Large(a, b) << endl;
    cout << Large(c, d) << endl;
    return 0;
}