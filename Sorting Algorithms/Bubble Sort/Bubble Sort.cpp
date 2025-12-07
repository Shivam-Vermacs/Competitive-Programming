#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &vec, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int swapno = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
                swapno = 1;
            }
        }
        if (swapno == 0)
        {
            break;
        }
    }
}

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
        BubbleSort(vec, n);
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}