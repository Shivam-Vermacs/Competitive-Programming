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
        set<int> st;
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        for (int i = 0; i < n; i++)
        {
            st.insert(v2[i]);
        }
        int index = 0;
        for (auto it : st)
        {
            v2[index] = it;
            index++;
        }
        cout << index << endl;
        }
}