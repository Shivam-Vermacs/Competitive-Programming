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
        int sum = 0;
        while(n1>0)
        {
            int ls_digit = n1 % 10;
            sum += ls_digit;
            n1 /= 10;

        }
        cout << sum << endl;
    }
}