#include <bits/stdc++.h>
using namespace std;

int main()
{
    string firstName1, lastName1;

    string firstName2, lastName2;

    cin >> firstName1 >> lastName1;

    cin >> firstName2 >> lastName2;

    if (lastName1 == lastName2)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }
    return 0;
}
