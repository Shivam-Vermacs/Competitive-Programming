#include <bits/stdc++.h>
using namespace std;

int maxElement(int n, vector<int> &vec)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] > maxi)
        {
            maxi = vec[i];
        }
    }
    return maxi;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        if (n < 2)
        {
            cout << -1 << endl;
            continue;
        }

        int maxi = maxElement(n, vec);
        int secondMax = INT_MIN;
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (vec[i] < maxi && vec[i] > secondMax)
            {
                secondMax = vec[i];
                found = true;
            }
        }

        if (found)
            cout << secondMax << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
