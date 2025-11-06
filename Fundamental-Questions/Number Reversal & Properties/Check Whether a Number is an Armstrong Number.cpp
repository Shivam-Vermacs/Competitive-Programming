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

        int digits = 0;
        while (n1 > 0)
        {
            n1 /= 10;
            digits++;
        }

        int sum = 0;
        n1 = n;

        while (n1 > 0)
        {
            int ls = n1 % 10;
            int power = 1;

            for (int i = 0; i < digits; i++)
                power *= ls; // integer power → no floating errors

            sum += power;
            n1 /= 10;
        }

        if (sum == n)
            cout << "Armstrong" << endl;
        else
            cout << "Not Armstrong" << endl;
    }
}
