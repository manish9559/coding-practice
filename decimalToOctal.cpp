#include<bits/stdc++.h>
using namespace std;
// Method 1
//Using Array

void decimalToBinary(int num)
{
    int count =0;
    int arr[32];
    
    while (num>0)
    {
        arr[count] = num%8;
        num/=8;
        count++;
    }
    for(int j=count-1;j>=0;j--)
    {
        cout<<arr[j];
    }
}

// Method 2
// Without using Array
/*int decimalToBinary(int num)
{
    int count =0,ans=0;
    
    while (num != 0)
    {
        int rem = num%8;
        ans += rem*pow(10,count); 
        num/=8;
        count++;
    }
    return ans;
}*/
int main()
{
    int num;
    cin>>num;
    //cout<<decimalToBinary(num);
    decimalToBinary(num);
    return 0;
}