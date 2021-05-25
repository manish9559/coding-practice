#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int highestMountainLength(vector<int> arr)
{
    int n = arr.size();
    int largest = 0;
    for (int i = 1; i < n - 1;)
    {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
        {
            int count = 1;
            int j = i;
            //count backward
            while (j >= 1 && arr[j] > arr[j - 1])
            {
                count++;
                j--;
            }
            //count forward
            while (i <= n - 2 && arr[i] > arr[i + 1])
            {
                count++;
                i++;
            }
            largest = max(largest, count);
        }
        else
        {
            i++;
        }
    }
    return largest;
}
int main()
{
    vector<int> v = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};

    cout << highestMountainLength(v);
    return 0;
}