#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=maxNo)
        {
            maxNo = arr[i]; // alternative we can use maxNo = max(maxNo,arr[i]);
        }
       
        if(arr[i]<minNo)
        {
            minNo = arr[i]; // alternative we can use maxNo = max(maxNo,arr[i]);
        }
    }
    cout<<maxNo<<" "<<minNo;
    return 0;
}