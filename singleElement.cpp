#include<iostream>
using namespace std;
int singleElement(int arr[],int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = res^arr[i];
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<singleElement(arr,n);
    return 0;
}