#include<bits/stdc++.h>
using namespace std;
//Linear search
/*int linearSearch(int arr[],int n, int key)
{
    for(int i =0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}*/
//Binary Search
int binarySearch(int arr[], int n, int key)
{
    int s =0; int l = n;
    int mid = (s + l)/2;
    while (s<=l)
    {
        int mid = (s + l)/2;
       if(arr[mid] == key)
       {
           return mid;
       } /* code */
       else if(arr[mid]>key)
       {
           l = mid-1;
       }
       else{
           s = mid+1;
       }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i]; /* code */
    }
    int m;
    cin>>m;
    //cout<<"Index of the element to be linearly searched: "<<linearSearch(arr,n,m);
    cout<<binarySearch(arr,n,m);
    return 0;
}