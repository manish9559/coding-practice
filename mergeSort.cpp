#include <iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int nl = mid - l + 1;
    int nr = r - mid;
    int left[nl];
    int right[nr];
    for (int i = 0; i < nl; i++)
    {
        left[i] = arr[l + i];
    }
    for (int j = 0; j < nr; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while (i < nl && j < nr)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < nl)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < nr)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{

    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
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

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
