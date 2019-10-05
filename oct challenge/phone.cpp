#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int c = 1;
        int z = 1;
        cin >> n;
        int a[n] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++)
        {
            int x[n] = {};
            int m;
            if (i <= 5)
            {
                for (int j = 0; j < i; j++)
                {
                    x[j] = a[j];
                }

                m = x[0];
                for (int b = 0; b < i; b++)
                {
                    if (m > x[b])
                    {
                        m = x[b];
                    }
                }
            }
            if (a[i] < m)
            {
                c++;
            }
            if (i >= 5)
            {
                int x[n] = {};
                for (int j = 0; j < 5; j++)
                {
                    x[j] = a[z + j];
                }
                m = x[0];

                for (int b = 0; b < 5; b++)
                {
                    if (m > x[b])
                    {
                        m = x[b];
                    }
                }

                z++;
            }
        }
        cout << c << endl;
    }
}