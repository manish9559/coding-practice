#include<bits/stdc++.h>
using namespace std;
int octalToDecimal(int n)
{
    int i = 0,sum = 0;
    while (n>0)
    {
        int rem = n%10;
        sum = sum+(rem*pow(8,i));
        n/=10;
        i++;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<octalToDecimal(n);
    return 0;
}