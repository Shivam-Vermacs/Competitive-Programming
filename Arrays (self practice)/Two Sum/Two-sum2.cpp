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
        int target;
        cin >> target;

        int left = 0;
        int right = n - 1;
        while (left < right)
        {
            if (vec[left] + vec[right] == target)
            {
                cout << left + 1 << " " << right + 1;
                break;
            }
            else if (vec[left] + vec[right] < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        cout << endl;
    }
    return 0;
}