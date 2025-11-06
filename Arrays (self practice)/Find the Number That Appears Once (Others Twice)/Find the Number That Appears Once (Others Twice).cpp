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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        for (int c : vec)
        {
            mp[c]++;
        }
        for (auto it : mp)
        {
            if (it.second == 1)
            {
                cout << it.first << endl;
                break;
            }
        }
    }
    return 0;
}