#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int a, b, sum;
        cin >> a >> b;
        sum = a + b;
        string s = to_string(sum);
        int c=0;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                c += 6;
            }
            else if (s[i] == '1')
            {
                c += 2;
            }
            else if (s[i] == '2')
            {
                c += 5;
            }
            else if (s[i] == '3')
            {
                c += 5;
            }
            else if (s[i] == '4')
            {
                c += 4;
            }
            else if (s[i] == '5')
            {
                c += 5;
            }
            else if (s[i] == '6')
            {
                c += 6;
            }
            else if (s[i] == '7')
            {
                c += 3;
            }
            else if (s[i] == '8')
            {
                c += 7;
            }
            else if (s[i] == '9')
            {
                c += 6;
            }
        }

        cout << c << endl;
    }
    return 0;
}