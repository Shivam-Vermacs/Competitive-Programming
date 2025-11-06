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
        vector<int> vec(n - 1);
        int originalSum = 0, tsSum = 0;
        int MissingNumber;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> vec[i];
        }
        for (int i = 1; i <= n; i++)
        {
            originalSum += i;
        }
        for (int i = 0; i < vec.size(); i++)
        {
            tsSum += vec[i];
        }
        MissingNumber = originalSum - tsSum;
        cout << MissingNumber << endl;
    }
}