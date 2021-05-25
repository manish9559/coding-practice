#include <iostream>
using namespace std;
void TOH(int num, char A, char B, char C)
{
    if (num > 0)
    {
        TOH(num - 1, A, C, B);
        cout << "Move a disk " << num << " from "
             << " " << A << " to"
             << " " << C << endl;
        TOH(num - 1, B, A, C);
    }
}
int main()
{
    int n;
    cin >> n;
    char A = 'A';
    char B = 'B';
    char C = 'C';
    TOH(n, A, B, C);

    return 0;
}
