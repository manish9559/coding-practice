#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m = max(a,max(b,c));
    if(m==a)
    {
        cout<<a<<" is greatest number"<<endl;
    }
    else if(m==b)
    {
        cout<<b<<" is greatest number"<<endl;
    }
    else{
        cout<<c<<" is greatest number"<<endl;
    }
    return 0;
}