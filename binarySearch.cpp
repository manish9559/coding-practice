#include <iostream>
using namespace std;
//Binary Search using recursion.
int binarySearch(int arr[], int l, int r, int val)
{

    int mid = (l + r) / 2;
    if (arr[mid] == val)
    {
        return mid;
    }
    else if (arr[mid] < val)
    {
        binarySearch(arr, mid + 1, r, val);
    }
    else
    {
        binarySearch(arr, l, mid - 1, val);
    }
    return -1;
}
/*int binarySearch(int arr[], int n, int val)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] < val)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}*/

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
    int l = 0;
    int r = n - 1;
    int val;
    cin >> val;
    int res = binarySearch(arr, l, r, val);
    if (res == -1)
    {
        cout << "The given val is not present in the array." << endl;
    }
    cout << "Val is present in " << res + 1 << "th location." << endl;
    return 0;
}