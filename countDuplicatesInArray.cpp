//Given an array A (may contain duplicates) of N elements and a positive integer K. 
//The task is to count the number of elements which occurs exactly floor(N/K) times in the array.


#include<bits/stdc++.h>
using namespace std;
//Method 1
int countspecials(int arr[],int n,int k)
{
    int f = floor(n/k),count = 0;
    bool visited[n] = {false};
    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        if(!visited[i])
        {
            for (int j = 0; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    freq++;
                    visited[j] = true;
                }
            }
            
        }
        if(freq == f)
        {
            count++;
            visited[i] = true;
        }
    }
    return count;
}

//Method 2
/*int countspecials(int arr[],int n,int k)
{
    int f = floor(n/k),count = 0;
    unsorted_map<int,int>hash;

    for (int i = 0; i < n; i++)
    {
       hash[arr[i]]++;
    }
    for(int i=0;i<1000;i++)
    if(hash[i] == f) count++;
    return count;
}*/
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<countspecials(arr,n,k)<<endl;
    return 0;
}