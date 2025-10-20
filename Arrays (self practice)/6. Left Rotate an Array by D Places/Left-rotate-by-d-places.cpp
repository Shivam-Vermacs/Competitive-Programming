#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        d = d % n; // in case d is greater than n
        vector<int> rotatedArr;
        rotatedArr.insert(rotatedArr.end(), arr.begin() + d, arr.end());
        rotatedArr.insert(rotatedArr.end(), arr.begin(), arr.begin() + d);
        for (int i = 0; i < n; i++)
        {
            cout << rotatedArr[i] << " ";
        }
        cout << endl;
    }
}

