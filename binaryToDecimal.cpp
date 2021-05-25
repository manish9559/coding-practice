#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int i = 0,sum = 0;
    while (n>0)
    {
        int rem = n%10;
        sum = sum+(rem*pow(2,i));
        n/=10;
        i++;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);
    return 0;
}