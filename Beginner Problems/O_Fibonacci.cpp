#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long first = 0, second = 1; 

    if (N == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (N == 2)
    {
        cout << 1 << endl;
        return 0;
    }

    long long fib;
    for (int i = 3; i <= N; i++)
    {
        fib = first + second;
        first = second;
        second = fib;
    }

    cout << second << endl;
    return 0;
}
