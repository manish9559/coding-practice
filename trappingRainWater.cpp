#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
// this method will take O(n2) time.
/*
int waterTrap(vector<int> arr)
{
    int n = arr.size();
    int currentWater = 0;
    for (int i = 0; i < n; i++)
    {
        //highest on the left
        int l = i;
        int leftMax = arr[i];
        while (l > 0)
        {
            leftMax = max(leftMax, arr[l - 1]);
            l--;
        }
        //highest on the right
        int r = i;
        int rightMax = arr[i];
        while (r < n - 1)
        {
            rightMax = max(rightMax, arr[r + 1]);
            r++;
        }
        currentWater += (min(leftMax, rightMax) - arr[i]);
    }
    return currentWater;
}
*/

int waterTrap(vector<int> arr)
{
    int n = arr.size();
    if (n <= 2)
        return 0;

    vector<int> left(n, 0), right(n, 0);
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
        right[n - i - 1] = max(right[n - i], arr[n - i - 1]);
    }
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        water += min(left[i], right[i]) - arr[i];
    }
    return water;
}

int main()
{
    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout << waterTrap(v) << endl;
    return 0;
}