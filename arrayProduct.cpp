#include <iostream>
#include <vector>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> arr)
{

    //Create an output Array
    int n = arr.size();
    vector<int> output(n, 1);

    //update the output array and return
    //complete the code
    for (int i = 1; i < n; i++)
    {
        output[0] *= arr[i];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        output[n - 1] *= arr[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        int l = i - 1, r = i + 1;
        while (l >= 0)
        {
            output[i] *= arr[l];
            l--;
        }
        while (r < n)
        {
            output[i] *= arr[r];
            r++;
        }
    }
    return output;
}
int main()
{
    vector<int> v = {5, 6, 3, 4, 2};
    //auto res = productArray(v);
    auto res = productArray(v);
    for (auto x : res)
    {
        cout << x << " ";
    }
    return 0;
}