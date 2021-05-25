#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<vector<int>> findTriplet(vector<int> arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for (int i = 0; i <= n - 3; i++)
    {
        int l = i + 1, r = n - 1;
        int temp = target - arr[i];
        while (l < r)
        {
            if (arr[l] + arr[r] == temp)
            {
                ans.push_back({arr[i], arr[l], arr[r]});
                l++;
                r--;
            }
            else if (arr[l] + arr[r] < temp)
                l++;
            else
                r--;
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int target = 18;
    auto res = findTriplet(v, target);
    for (auto v : res)
    {
        for (auto num : v)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}