#include <bits/stdc++.h>
using namespace std;
// Brute force approach..............time complexity will be O(n^2)
/*int majorityElement(int arr[], int n)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > (n / 2))
    {
        return arr[index];
    }
    else
        return -1;
}*/
//By using the sorting technique..................Time Complexity will be O(nlogn)
/*int majorityElement(int arr[], int n)
{
    sort(arr, arr + n);
    int maxCount = 0;
    int index = -1;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }
    if (maxCount > (n / 2))
    {
        return arr[index];
    }
    else
        return -1;
}*/
//By using the hashmap technique..................Time Complexity will be O(n) and space comlpexity will be O(n).
/*int majorityElement(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto x : mp)
    {
        if (x.second > (n / 2))
        {

            return x.first;
        }
    }
    return -1;
}*/
// BOYER MOORE VOTING ALGORITHM
int majorityElement(int a[], int size)
{

    int aIndex = 0;
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == a[aIndex])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            aIndex = i;
            count = 1;
        }
    }
    int num = a[aIndex];
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == num)
            c++;
    }
    if (c > size / 2)
        return num;
    else
        return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mE = majorityElement(arr, n);
    cout << mE << endl;
    return 0;
}