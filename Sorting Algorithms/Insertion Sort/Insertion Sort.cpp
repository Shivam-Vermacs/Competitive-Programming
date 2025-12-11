#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n;i++)
        {
            cin >> vec[i];
        }
        for (int i = 1; i < n;i++)
        {
            int j = i;
            while(j>0 && vec[j-1]>vec[j])
            {
                swap(vec[j - 1], vec[j]);
                j--;
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