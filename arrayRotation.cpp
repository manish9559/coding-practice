//Method1 : Juggling Algorithm
#include <iostream>
using namespace std;
/*int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void rotate(int arr[], int n, int k)
{
    int d = 0, i, temp, j;
    for (i = 0; i < gcd(n, k); i++)
    {
        temp = arr[i];
        j = i;
        while (1)
        {
            d = (j + k) % n;
            if (d == i)
                break;
            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
*/
void rotate(int arr[], int n, int k)
{
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        /* code */
        temp[i] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        cout << temp[i] << " ";
    }
    int x = arr[0];
    for (int i = k; i < n; i++)
    {
        /* code */
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = x;
    // for (int i = 0; i < k; i++)
    // {
    //     arr[n - i - 1] = temp[1];
    // }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int start = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, n, k);
    return 0;
}