#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

/*
int LargestSub(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int ans = 1;
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            count++;
            ans = max(ans, count);
        }
        else if (arr[i + 1] - arr[i] == 0)
            continue;
        else
            count = 1;
    }
    return ans;
}
*/
int LargestSub(vector<int> arr)
{
    int n = arr.size();
    unordered_set<int> S;
    int largest = 1;
    for (int i = 0; i < n; i++)
    {
        S.insert(arr[i]);
    }
    for (auto element : S)
    {
        int parent = element - 1;
        if (S.find(parent) == S.end())
        {
            int count = 1;
            int next_Element = element + 1;
            while (S.find(next_Element) != S.end())
            {
                next_Element++;
                count++;
            }
            largest = max(largest, count);
        }
    }
    return largest;
}
int main()
{
    vector<int> v = {1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};

    cout << LargestSub(v) << endl;
    return 0;
}