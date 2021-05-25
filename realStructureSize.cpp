#include <iostream>
using namespace std;
int main()
{
    struct S1
    {
        char c; // 1 byte

        int a; // 4 byte
        double d;
        //char ch; // 1 byte
        //short s; // 2 byte
    } Sum; // total size of structure would be = 1 + 4 + 1 + 2;
    cout << sizeof(Sum) << endl;
    //but real size is 12 byte;
    return 0;
}