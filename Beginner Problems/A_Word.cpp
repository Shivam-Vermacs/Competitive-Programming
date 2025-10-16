#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int countup = 0, countlow = 0;
    string s1 = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            countup++;
        }
        else
        {
            countlow++;
        }
    }
    if (countup > countlow)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s1 = s1 +(char)toupper(s[i]);
        }
        cout << s1 << endl;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            s1 = s1 + (char)tolower(s[i]);
        }
        cout << s1 << endl;
    }
    return 0;
}