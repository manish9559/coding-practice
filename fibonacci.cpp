//Finding Fibonacci series of an user given input by using recursion.
/*#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}*/
//Finding Fibonacci number of an user given input by using dynamic programming.
/*
#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int f[n + 2]; 
    int i;
 
    // 0th and 1st number of the 
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
         
       //Add the previous 2 numbers 
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int main()
{
    int n;
    cin>>n;
    
        cout<<fib(n)<<" ";
    return 0;
}
*/
//Fibonacci Series using space optimised method
#include<iostream>
using namespace std;
int fib(int n)
{
    int a = 0, b =1, c;
    if(n<=1)
    {
        return n;
    }
    for (int i = 1; i < n; i++)
    {
        
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}