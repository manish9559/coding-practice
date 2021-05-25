#include <iostream>
using namespace std;
int main()
{
    int *ptr, sum = 0;
    ptr = new int[6];
    for (int i = 0; i < 6; i++)
    {
        /* code */
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 6; i++)
    {
        /* code */
        sum += ptr[i];
    }
    delete[] ptr;
    ptr = NULL;                 //this is a good practice after deleting the memory initialize it Null pointer so that other program can not use this block of memory.
    for (int i = 0; i < 6; i++) //from this point the pointer is called the dangling pointer.
    {
        /* code */
        sum += ptr[i];
    }
    cout << sum << endl;
    return 0;
}