#include <bits/stdc++.h>
using namespace std;
void arrangingNegativeNumber(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
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
        /* code */
        cin >> arr[i];
    }
    arrangingNegativeNumber(arr, n);
    return 0;
}