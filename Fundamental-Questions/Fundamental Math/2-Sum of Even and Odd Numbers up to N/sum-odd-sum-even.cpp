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
        int sum_even = 0;
        int sum_odd = 0;
        while (a <= n)
        {
            if (a % 2 == 0)
            {
                sum_even += a;
            }
            else
            {
                sum_odd += a;
            }
            a++;
        }
        cout << sum_even << " " << sum_odd << endl;
    }
    return 0;
}