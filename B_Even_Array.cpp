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
        int a[n];
        int c = 0;
        int odd = 0, even = 0;
        int OddCount = 0, EvenCount = 0;
        if (n % 2 == 0)
        {
            OddCount = n / 2;
            EvenCount = n / 2;
        }
        else
        {
            OddCount = n / 2;
            EvenCount = (n / 2) + 1;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even != EvenCount && odd != OddCount)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i += 2)
        {
            if ((a[i] % 2) != (i % 2))
            {
                c++;
            }
        }
        cout << c << '\n';
    }
}