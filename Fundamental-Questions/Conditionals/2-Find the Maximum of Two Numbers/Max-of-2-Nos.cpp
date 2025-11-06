#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        int maxNo;
        cin >> a >> b;
        if (a > b)
        {
            maxNo = a;
        }
        else
        {
            maxNo = b;
        }
        cout << maxNo << endl;
    }
}