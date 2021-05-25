#include <iostream>
using namespace std;
struct Pair
{
    /* data */
    int min;
    int max;
};
struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    minmax.min = arr[0];
    minmax.max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > minmax.max)
            minmax.max = arr[i];

        else if (arr[i] < minmax.min)
            minmax.min = arr[i];
    }
    return minmax;
}

int main()
{
    int arr[] = {23, 456, 56654, 980584, 134, 45};
    int size = 6;
    struct Pair minMax = getMinMax(arr, size);
    cout << "Minimum element is "
         << minMax.min << endl;
    cout << "Maximum element is "
         << minMax.max;
    return 0;
}