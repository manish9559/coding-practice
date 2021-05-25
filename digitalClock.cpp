#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convert_to_digital_time(int minutes)
{
    //complete this function
    int hrs = minutes / 60;
    int minute = minutes % 60;
    if (minute < 10)
    {
        return to_string(hrs) + ":0" + to_string(minute);
    }
    return to_string(hrs) + ":" + to_string(minute);
}
int main()
{
    int n;
    cin >> n;
    cout << convert_to_digital_time(n) << endl;
    return 0;
}