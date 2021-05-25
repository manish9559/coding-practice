#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    //a[0] = 2;//segmentation fault
    a.push_back(2);
    vector<int> b(a);
    b[0] = 6;
    //vector<char> c(a); compiler error;
    vector<char> c(5, 66);
    cout << c[0] << endl;
    return 0;
}