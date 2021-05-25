#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[n - 1];
    int temp1 = arr[n - 2];
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    arr[1] = temp1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rotate(arr, n);
    return 0;
}