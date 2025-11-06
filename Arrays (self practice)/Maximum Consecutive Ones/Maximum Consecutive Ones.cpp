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
        int count = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        for (int i = 0; i < n; i++)
        {

            if (vec[i] == 1)
            {
                count++;
                maxi = max(maxi, count);
            }
            else
            {
                count = 0;
            }
        }
        cout << maxi << endl;
    }
}