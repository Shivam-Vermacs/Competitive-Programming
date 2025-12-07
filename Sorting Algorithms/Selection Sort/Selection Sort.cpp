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
        int minIndex;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (vec[j] < vec[minIndex])
                {
                    minIndex = j;
                }
            }
            temp = vec[i];
            vec[i] = vec[minIndex];
            vec[minIndex] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}