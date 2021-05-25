#include<iostream>
using namespace std;
#define SIZE 3
int main()
{
    int a[] = {1,2,3};
    int *ptr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        ptr[i] = &a[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
       cout<<*ptr[i]<<endl;
    }
    
    return 0;
}