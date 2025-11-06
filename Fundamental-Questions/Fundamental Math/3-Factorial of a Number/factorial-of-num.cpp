#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int fact = 1;
        while(n>=1)
        {
            fact *= n;
            n--;
        }
        cout << fact << endl;

    }
    return 0;
}