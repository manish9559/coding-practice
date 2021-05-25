#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

pair<int, int> minDifference(vector<int> a, vector<int> b)
{
    //Complete this method
    int a_size = a.size();
    int b_size = b.size();
    pair<int, int> ap;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int res_l = 0, res_r = 0;
    int min_diff = INT_MAX;
    int l = 0, r = 0;
    while (l < a_size && r < b_size)
    {
        if (abs(a[l] - b[r]) < min_diff)
        {
            min_diff = abs(a[l] - b[r]);
            res_l = l;
            res_r = r;
            cout << abs(a[l] - b[r]) << endl;
        }
        else if (a[l] < b[r])
            l++;
        else
            r++;
    }
    ap.first = a[res_l];
    ap.second = b[res_r];
    return ap;
}
int main()
{
    vector<int> v1 = {23, 5, 10, 17, 30};
    vector<int> v2 = {26, 134, 135, 14, 19};
    auto res = minDifference(v1, v2);
    cout << res.first << " " << res.second << endl;
    return 0;
}