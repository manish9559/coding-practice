#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    /*sort(arr, arr + n);
    cout << "kth smallest element will be: " << arr[k - 1] << endl;
    return 0;*/
    //Using Heap concept;
    priority_queue<int> maxhp;
    for (int i = 0; i < n; i++)
    {
        /* code */
        maxhp.push(arr[i]);
        if (maxhp.size() > k)
        {
            maxhp.pop();
        }
    }
    cout << maxhp.top() << endl;
    return 0;
}