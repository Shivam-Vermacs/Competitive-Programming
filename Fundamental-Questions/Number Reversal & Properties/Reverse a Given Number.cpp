#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int n1 = n;
        int reverse = 0;
        while (n1 > 0)
        {
            int ls = n1 % 10;
            n1 /= 10;
            reverse = (reverse * 10) + ls;
        }
        cout << reverse << endl;
    }
}