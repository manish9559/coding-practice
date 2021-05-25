#include<bits/stdc++.h>
using namespace std;
// Method 1
//Using Array
/*
void decimalToHexadecimal(int num)
{
    int count =0;
    char arr[100];
    
    while (num>0)
    {
        int rem = num%16;
        if(rem <= 9)
        {
            arr[count] = rem + 48;
        }
        if(rem>=10 && rem<=15)
        {
            
            arr[count] = rem + 55;
        }
        num/=16;
        count++;
    }
    for(int j=count-1;j>=0;j--)
    {
        cout<<arr[j];
    }
}
*/
// Method 2
// Without using Array
string decimalToHexadecimal(int num)
{
    int count =0;
    string ans = "";
    while (num != 0)
    {
        int rem = num%16;
        if(rem<10)
        {
            ans += to_string(rem);
        }
        else
        {
            char c = 'A' + rem - 10;
            ans.push_back(c);
        }
        num/=16;
        count++;
    }
    return ans;
}
int main()
{
    int num;
    cin>>num;
    cout<<decimalToHexadecimal(num);
    //decimalToBinary(num);
    return 0;
}