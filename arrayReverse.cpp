#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int start = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    cout << "before reversing the array: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (start != end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    cout << "\nAfter reversing the array: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    return 0;
}