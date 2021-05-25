#include <iostream>
using namespace std;
void printBinary(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}
void genrateBinaryStrings(int n, int arr[], int i)
{
    if (i == n)
    {
        printBinary(arr, n);
        return;
    }
    arr[i] = 0;
    genrateBinaryStrings(n, arr, i + 1);
    arr[i] = 1;
    genrateBinaryStrings(n, arr, i + 1);
}
int main()
{
    int n = 3;
    int arr[n];
    genrateBinaryStrings(n, arr, 0);
    return 0;
}