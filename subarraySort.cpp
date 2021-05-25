#include <bits/stdc++.h>
using namespace std;
// Method one and time complextity will be O(NlogN)
/*
pair subarraySort(vector<int> arr)
{
    int n = arr.size();
    vector<int> temp(arr);
    pair<int,int> ans;
    sort(arr.begin(), arr.end());
    int l = 0;
    while (l < n)
    {
        if (arr[l] != temp[l])
        {
            ans.first = l;
            break;
        }
        l++;
    }
    int r = n - 1;
    while (r >= 0)
    {
        if (arr[r] != temp[r])
        {
            ans.second = r;
            break;
        }
        r--;
    }
    return ans;
}
*/
bool outOfOrder(vector<int> arr, int i)
{
    int x = arr[i];
    if (i == 0)
    {
        return x > arr[1];
    }
    if (i == arr.size() - 1)
    {
        return x < arr[i - 1];
    }
    return x > arr[i + 1] or x < arr[i - 1];
}
pair<int, int> subarraySort(vector<int> arr)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = arr[i];
        if (outOfOrder(arr, i))
        {
            smallest = min(smallest, x);
            largest = max(largest, x);
        }
    }
    int l = 0;
    while (smallest >= arr[l])
    {
        l++;
    }
    int r = arr.size() - 1;
    while (largest <= arr[r])
    {
        r--;
    }
    return {l, r};
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
    auto res = subarraySort(v);
    cout << res.first << " " << res.second << endl;
    return 0;
}