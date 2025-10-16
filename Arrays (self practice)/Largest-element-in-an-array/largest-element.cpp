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
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int maximum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] > maximum)
            {
                maximum = vec[i];
            }
        }
        cout << maximum << endl;
    }
}