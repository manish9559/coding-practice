#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int> arr)
{
    int n = arr.size();
    int ans = 0;
    //Know the actual position of the elements and store the currents indices.
    pair<int, int> temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i].first = arr[i];
        temp[i].second = i;
    }
    // temp : 10 11 5 4 2 3 1
    //         0 1  2 3 4 5 6
    //now do the sorting
    sort(temp, temp + n);
    //after sorting temp : 1 2 3 4 5 10 11
    //                     6 4 5 3 2 0  1
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        //if the node is visited or if the node is in its correct position then continue.

        int old_position = temp[i].second; // old_position are 6 4 5 3 2 0  1
        if (visited[i] == true || old_position == i)
        {
            continue;
        }

        //if the node is not visited.
        int cycle = 0;
        int node = i;
        while (!visited[node])
        {
            visited[node] = true;
            int next_node = temp[node].second;
            node = next_node;
            cycle += 1;
        }
        ans += (cycle - 1);
    }
    return ans;
}

int main()
{
    vector<int> v = {5, 4, 3, 2, 1};
    int res = minSwaps(v);
    cout << res << endl;
    return 0;
}