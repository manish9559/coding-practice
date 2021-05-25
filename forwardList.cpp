#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> list1 = {5, 4, 6, 3};
    forward_list<int> list2 = {7, 12, 1, 2};
    cout << "Simple list printing\n";
    for (auto &it : list1)
    {
        cout << it << " ";
    }
    list1.splice_after(list1.begin(), list2);
    cout << "After slice_after function.\n";
    cout << "\n";
    for (auto &it : list1)
    {
        cout << it << " ";
    }
    cout << "Size of list2 :" << distance(list2.begin(), list2.end()) << "\n";
    //insert_after function.
    list1.insert_after(list1.begin(), 8);
    cout << "\n";
    for (auto &it : list1)
    {
        cout << it << " ";
    }
    list1.remove_if([](int n) {
        return n > 4;
    });
    cout << "\n";
    for (auto &it : list1)
    {
        cout << it << " ";
    }
    list1.sort();
    list2.sort();
    list2.merge(list1); //merge function will only works for sorted list.
    cout << "\n";
    for (auto &it : list2)
    {
        cout << it << " ";
    }
    list2.reverse();
    cout << "\n";
    for (auto &it : list2)
    {
        cout << it << " ";
    }

    return 0;
}