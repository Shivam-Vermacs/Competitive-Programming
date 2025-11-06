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
        int n1 = n;
        int count = 0;
        while(n1>0)
        {
            n1 /= 10;
            count++;
        }
        cout << count << endl;
    }
}