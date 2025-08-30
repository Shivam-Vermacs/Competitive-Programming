#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;
    long long int minimum = min(a, min(b, c));
    long long int maximum = max(a, max(b, c));
    cout << minimum << " " << maximum << endl;
    return 0;
}
