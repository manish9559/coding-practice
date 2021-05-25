#include<bits/stdc++.h>
using namespace std;
int hexaToDecimal(string n)
{
    int i = 1,sum = 0;
    int s = n.size();
    for (int j = s-1; j >=0; j--)
    {
        if(n[j] >= '0' && n[j] <= '9')
        {
            sum += i*(n[j]-'0');
        }
      if(n[j] >= 'A' && n[j] <= 'F')
        {
            sum += i*(n[j]-'A' + 10);
        }
        i*=16;
    }
    return sum;
}
int main()
{
    string n;
    cin>>n;
    cout<<hexaToDecimal(n);
    return 0;
}