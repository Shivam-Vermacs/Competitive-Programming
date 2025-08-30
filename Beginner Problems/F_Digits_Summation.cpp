#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int digit1 = a % 10;
    long long int digit2 = b % 10;
    long long int sum = digit1 + digit2;
    cout << sum << endl;
    return 0;
}