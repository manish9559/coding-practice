//Method to pass a variable size 2d array.
#include<iostream>
using namespace std;
void printingArray(int m,int n,int *arr)
{
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<*((arr + i*n)+j)<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int m,n;
    cin>>m>>n;
    printingArray(m,n,(int *)arr);
    return 0;
}