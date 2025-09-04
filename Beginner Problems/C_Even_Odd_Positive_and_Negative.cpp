#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    int Even = 0, Odd = 0, Negative = 0, Positive = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0)
        {
            Even++;
        }
        if (a[i] % 2 != 0)
        {
            Odd++;
        }
        if (a[i] < 0)
        {
            Negative++;
        }
        if (a[i] > 0)
        {
            Positive++;
        }
        {
            continue;
        }
    }
    cout << "Even: " << Even << endl;
    cout << "Odd: " << Odd << endl;
    cout << "Positive: " << Positive << endl;
    cout << "Negative: " << Negative << endl;

    return 0;
}