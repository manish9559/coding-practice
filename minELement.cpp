#include<iostream>
using namespace std;
void rotateArray(int arr[],int n,int x)
{
    
}
int main()
{
     int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int l = 0;
    int r = n - 1;
    int x;
    cout<<"insert a element to rotate array around it: ";
    cin>>x;
    rotateArray(arr,n,x);
}