#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        if (c >= 'a' && c <= 'z')
        {
            cout << "Lowercase" << endl;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            cout << "Uppercase" << endl;
        }
        else if (c >= '0' && c <= '9')
        {
            cout << "Digit" << endl;
        }
        else
        {
            cout << "Special Symbol" << endl;
        }
    }
}