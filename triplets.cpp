#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<vector<int>> findTriplet(vector<int> arr, int target)
{
    int n = arr.size();

    vector<vector<int>> ans;
    for (int i = 0; i < n - 1; i++)
    {
        unordered_set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int x = target - (arr[i] + arr[j]);
            if (s.find(x) != s.end())
                ans.push_back({arr[i], arr[j], x});
            else
                s.insert(arr[j]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        sort(ans[i].begin(), ans[i].end());
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