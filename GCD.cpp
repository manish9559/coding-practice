#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    else if (a > b)
    {
        return GCD(a - b, b);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "GCD of two number is = " << GCD(a, b);
    cout << endl;
    return 0;
}