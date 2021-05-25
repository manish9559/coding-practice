#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
//Question: An Array of integers is given, both +ve and -ve.
// You need to find the two elements such that their sum is closest to zero.

//Brute Forse Approcah
// This approach will take O(N^2) time.
/*
pair<int, int> minSumPair(vector<int> arr)
{
    int n = arr.size();
    if (n < 2)
        cout << "Input is invalid" << endl;

    int left_index = 0, right_index = 0;
    int sum = 0;
    int min_sum = INT_MAX;
    pair<int, int> ap;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            if (abs(min_sum) > abs(sum))
            {
                min_sum = sum;
                left_index = i;
                right_index = j;
            }
        }
    }
    ap.first = arr[left_index];
    ap.second = arr[right_index];
    return ap;
}
*/
// Sorting approach will take O(NlogN) time.
pair<int, int> minSumPair(vector<int> arr)
{
    int n = arr.size();
    if (n < 2)
        cout << "Input is invalid" << endl;

    int l = 0, r = n - 1;
    int left_index = l, right_index = n - 1;
    int sum = 0;
    int min_sum = INT_MAX;
    pair<int, int> ap;
    while (l < r)
    {
        sum = arr[l] + arr[r];
        if (abs(min_sum) > abs(sum))
        {
            min_sum = sum;
            left_index = l;
            right_index = r;
        }
        else if (sum < 0)
            l++;
        else
            r--;
    }

    ap.first = arr[left_index];
    ap.second = arr[right_index];
    return ap;
}
int main()
{
    vector<int> v = {1, 60, -10, 70, -80, 85};
    auto res = minSumPair(v);
    cout << res.first << " " << res.second << endl;
    return 0;
}