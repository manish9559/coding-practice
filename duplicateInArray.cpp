#include <iostream>
#include <algorithm>
using namespace std;
void checkDuplicate(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == arr[i + 1])
        {
            cout << "Duplicate Present!!" << endl;
            return;
        }
    }
    cout << "No Duplicate present!!" << endl;
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
    checkDuplicate(arr, n);
    return 0;
}