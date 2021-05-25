#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int count = 0;
    int count1 = floor(log10(num) + 1);// formula for counting the number of digits
    while (num!=0)
    {
        count += 1;
        num /= 10;
    }
     
    cout<<count<<endl;
    cout<<count1;
    return 0;
}
