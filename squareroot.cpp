#include <bits/stdc++.h>
using namespace std;

int squareroot(int n)
{
    int i = 1;
    int result = 1;
    if (n == 0 || n == 1)
    {
        return n;
    }
    else {
    while (result <= n)
    {
        i++;
        result = i * i;
    }}
    return i - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<squareroot(n)<<endl;
    }
    return 0;
}