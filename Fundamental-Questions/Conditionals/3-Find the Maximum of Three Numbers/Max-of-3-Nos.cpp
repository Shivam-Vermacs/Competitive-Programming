#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mx;
        if (a >= b && a >= c)
            mx = a;
        else if (b >= a && b >= c)
            mx = b;
        else
            mx = c;
        cout << mx << endl;
    }
}