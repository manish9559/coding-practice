#include <bits/stdc++.h>
using namespace std;
bool allNegative(vector<int> arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            return false;
        }
    }
    return true;
}
int maxSubarraySum(vector<int> arr)
{
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();

    if (allNegative(arr))
        return 0;
    int currentMaxSum = arr[0];
    int highestMaxSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i])
            currentMaxSum = max(arr[i], currentMaxSum + arr[i]);
        highestMaxSum = max(highestMaxSum, currentMaxSum);
    }
    return highestMaxSum;
}

int main()
{
    vector<int> v = {-1, -2, -3, -4, -2, -6, -8, -3};
    cout << maxSubarraySum(v) << endl;
    return 0;
}