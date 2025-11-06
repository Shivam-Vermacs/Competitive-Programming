#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // getline(cin, s);
    // int count = 0;
    // for (char c : s)
    //     count++;
    // cout << count;

    getline(cin, s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    cout << s << endl;
    return 0;
}