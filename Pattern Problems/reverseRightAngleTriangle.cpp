#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 5;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < count; j++)
        {
            cout << "*";
        }
        cout << endl;
        count--;
    }
}