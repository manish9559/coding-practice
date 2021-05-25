#include <iostream>
#include <iterator>
#include <map>
#define mp make_pair
using namespace std;
int main()
{
    map<string, int> ABC;
    ABC["Ayush"] = 98;
    ABC["Manish"] = 97;
    ABC["Ashish"] = 98;
    map<string, int>::iterator itr;
    for (itr = ABC.begin(); itr != ABC.end(); itr++)
    {
        /* code */
        cout << itr->first << "  " << itr->second << endl;
    }
    ABC.insert(mp("Rahul", 67));
    ABC.insert(mp("Deepak", 87));
    ABC.insert(mp("Rajul", 92));
    ABC.insert(mp("Ram", 80));
    for (itr = ABC.begin(); itr != ABC.end(); itr++)
    {
        /* code */
        cout << itr->first << "  " << itr->second << endl;
    }
    ABC.erase("Rahul");
    //After erasing the key value of Rahul
    cout << "******************************************" << endl;
    for (itr = ABC.begin(); itr != ABC.end(); itr++)
    {
        /* code */
        cout << itr->first << "  " << itr->second << endl;
    }
    return 0;
}