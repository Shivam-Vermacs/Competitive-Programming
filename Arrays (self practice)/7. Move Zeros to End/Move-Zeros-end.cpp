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

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        
        vector<int> res(n); // by default, filled with 0s

        int index = 0; // pointer to fill non-zero elements
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] != 0)
            {
                res[index++] = arr[i];
            }
        }

        // Output the result
        for (int i = 0; i < n; ++i)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
