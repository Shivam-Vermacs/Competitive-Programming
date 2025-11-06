
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
        int c = 0, a = 2;
        while (a < n)
        {
            if (n % a == 0)
            {
                c++;
            }

            a++;
        }
        if (c == 0)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }
}