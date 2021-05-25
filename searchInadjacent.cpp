#include <iostream>
using namespace std;
int search(int arr[], int n, int x, int k)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == x)
        {
            return i;
        }
        i = i + abs((arr[i] - x) / k);
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
    int key;
    int diff;
    cin >> key >> diff;

    cout << "Element " << key << " is present at index " << search(arr, n, key, diff);
    return 0;
}