#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int mini = min(a, b);
        while(mini>0)
        {
            if(a%mini==0 && b%mini==0)
            {
                // cout << mini << endl;
                break;
            }
            mini--;
        }
        int lcm = (a * b / mini);
        cout << lcm << endl;
    }
}