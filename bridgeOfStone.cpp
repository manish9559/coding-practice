#include<iostream>
using namespace std;

void jump(int n,int p)
{
if(n % 2 != 0){
            if(p%2 == 0){
                cout << min((((p-1)/2)+1), ((n-p)/2));
            }
            else
            cout << min(((p-1)/2), ((n-p)/2));
        }
        else{
            if(p%2 == 0){
                cout << min(((p-1)/2)+1, ((n-p)/2));
            }
            else
            cout << min((p-1)/2, ((n-p)/2+1));
        }
    cout << endl;
    }
    int main()
    {
    
        long long N,X;
        cin>>N>>X;
        jump(N,X);
        return 0;

    }