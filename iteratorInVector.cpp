#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> myVector;
    myVector.push_back(90);
    myVector.push_back(21);
    myVector.push_back(23);
    myVector.push_back(80);
    myVector.push_back(50);
    // Accessing elements of the vector without using iterator.
    for (int i = 0; i < myVector.size(); i++)
    {
        /* code */
        cout << myVector[i] << " ";
    }
    // Accessing elements of the vector by using iterator.
    vector<int>::iterator it;
    for (it = myVector.begin(); it != myVector.end(); it++)
    {
        /* code */
        cout << *it << " ";
    }

    return 0;
}