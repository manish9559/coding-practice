#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Complete this method, don't write main
vector<string> fizzbuzz(int n)
{

    vector<string> v;
    for (int i = 1; i <= n; i++)
    {
        if (n % 15 == 0)
        {
            v.push_back("FizzBuzz");
        }
        else if (n % 5 == 0)
        {
            v.push_back("Buzz");
        }
        else if (n % 3 == 0)
        {
            v.push_back("Fizz");
        }
        else
        {
            v.push_back(to_string(i));
        }
        return v;
    }
}
int main()
{
    vector<string> str = fizzbuzz(100);
    for (string output : str)
    {
        cout << output << endl;
    }
    return 0;
}