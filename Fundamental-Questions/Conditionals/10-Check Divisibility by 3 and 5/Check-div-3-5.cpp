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
        if (n % 3 == 0 && n % 5 == 0)
        {
            cout << "Divisible by both" << endl;
        }
        else if (n % 3 == 0 && n % 5 != 0)
        {
            cout << "Divisible by 3" << endl;
        }
        else if (n % 3 != 0 && n % 5 == 0)
        {
            cout << "Divisible by 5" << endl;
        }
        else
        {
            cout << "Not divisible" << endl;
        }
    }
    return 0;
}