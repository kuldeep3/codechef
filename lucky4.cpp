#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 0;
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '4')
            {
                c++;
            }
        }

        cout << c << endl;
    }
}