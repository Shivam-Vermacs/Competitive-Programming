#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        set<int> st;
        for (int i : a)
        {
            st.insert(i);
        }
        for (int j : b)
        {
            st.insert(j);
        }
        for (int i : st)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}