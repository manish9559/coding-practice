#include<iostream>
using namespace std;
int main()
{
   int (*ptr)[3];
   int b[3] = {1,2,3};
   ptr = &b;
   for (int i = 0; i < 3; i++)
   {
     cout<<*(*ptr+i)<<endl; 
   }
   
   return 0;
}