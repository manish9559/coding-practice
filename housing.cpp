#include <bits/stdc++.h>
using namespace std;
// brute force approach
/*
vector<pair<int, int>> housingPlot(vector<int> arr, int k)
{
    int n = arr.size();
    vector<pair<int, int>> ap;

    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        for (int j = i + 1; j <= n; j++)
        {
            if (sum == k)
            {
                ap.push_back({i, j - 1});
            }
            if (sum > k || j == n)
                break;
            sum += arr[j];
        }
    }
    return ap;
}
*/
// Using Binary Search and Prefix Sum
/*
vector<pair<int, int>> housingPlot(vector<int> arr, int k)
{
    int n = arr.size();
    vector<pair<int, int>> ap;
    vector<int> prefix;
    int prefix_sum = arr[0];
    prefix.push_back(prefix_sum);
    for (int i = 1; i < n; i++)
    {
        prefix_sum += arr[i];
        prefix.push_back(prefix_sum);
    }
    for (int i = 0; i < n; i++)
    {
        int temp = prefix[i] + k;
        int l = i + 1, r = n - 1;
        int start = i + 1;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (prefix[mid] == temp)
            {
                ap.push_back({start, mid});
                break;
            }
            else if (prefix[mid] > temp)
                r = mid - 1;
            else
                l = mid + 1;
        }
    }
    return ap;
}

*/

// Sliding Window Method
vector<pair<int, int>> housingPlot(vector<int> arr, int k)
{
    int n = arr.size();
    vector<pair<int, int>> ap;
    int i = 0;
    int j = 0;
    int current_sum = 0;
    while (j < n)
    {
        //expand the window to right.
        current_sum += arr[j];
        j++;

        // remove from left if current sum > k  and i<j.
        while (current_sum > k and i < j)
        {
            current_sum -= arr[i];
            i++;
        }

        // print window if current sum == k.
        if (current_sum == k)
        {
            ap.push_back({i, j - 1});
        }
    }
    return ap;
}
int main()
{
    vector<int> v = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2};
    int k = 8;

    auto res = housingPlot(v, k);
    for (auto x : res)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}