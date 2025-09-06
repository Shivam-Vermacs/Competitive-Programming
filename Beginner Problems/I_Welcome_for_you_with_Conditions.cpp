#include <bits/stdc++.h>
using namespace std;

int welcomeMessage(int a, int b)
{
    if (a >= b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    welcomeMessage(a, b);
    return 0;
}
