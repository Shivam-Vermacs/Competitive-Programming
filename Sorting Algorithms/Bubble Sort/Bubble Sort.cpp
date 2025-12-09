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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (vec[j + 1] < vec[j])
                {
                    swap(vec[j], vec[j + 1]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}