// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

void follPatt(string );


 // } Driver Code Ends
//User function Template for C++

/* void follPatt(string s)
{
    int n = s.length(),i,flag = 0,count = 0,pre_x = 1;
    for(i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            if(count == 0 || pre_x == 1)
            {
                count += 1;
                pre_x = 1;
            }
            else
            {
                flag = 1;
                break;
            }   
        }
        else
        {
            pre_x = 0;
            count -= 1;
        }
    }
   
    if(flag == 1)
        cout<<"0"<<"\n";
    else if(count == 0)
        cout<<"1"<<"\n";
    else
        cout<<"0"<<"\n";
}
*/
// { Driver Code Starts.

//Using Stack
void follPatt(string s)
{
    bool condition = false;
    int n = s.size();
    stack<char> stk;
    int chk = 0;

    for(int i=0;i<n;i++)
    { 
        if(s[i]=='x')
            {
                stk.push(s[i]); 
                
            }
        if(s[i]=='y')
        {
            if(stk.empty())
            {
                condition=false;
                chk=1;
                break;
                
            }
                stk.pop();
                if(s[i+1]== 'x' && !stk.empty())
                {
                    condition=false; 
                    chk=1;
                    break;
                }
            }
        }
        if(stk.empty() && chk== 0)
        condition=true;
        cout<<(condition?"1":"0")<<endl;
}

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    follPatt(s);
	   
	}
	return 0;
}  // } Driver Code Ends