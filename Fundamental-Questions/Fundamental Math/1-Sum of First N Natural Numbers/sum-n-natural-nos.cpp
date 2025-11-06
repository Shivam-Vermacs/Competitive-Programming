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
        int a = 1;
        int sum = 0;
        while (a <= n)
        {
            sum = sum + a;
            a++;
        }
        cout << sum << endl;
    }
}