#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> l>>r;
        for (int i = l; i <= r;i++)
        {
            int c = 0;
            for (int j = 2; j < i;j++)
            {
                if (i%j==0)
                {
                    c++;
                }

                
            }
            if(c==0)
            {
                cout << i << " ";
            }
        }
    }
}