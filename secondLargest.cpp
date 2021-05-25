#include<bits/stdc++.h>
using namespace std;
/*void secondLarge(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; i < n; i++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    cout<<"Second Largest Element is: "<<arr[n-2];
}*/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //secondLarge(arr,n);
    sort(arr,arr+n,greater<int>());
    cout<<arr[1];
    return 0;
}