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
        int a[] = {1,2,5,10,50,100};
        for (int i = 5; i >= 0; i--)
        {
            c+=(n/a[i]);
            n=(n%a[i]);
        }
        cout<<c<<endl;
    }
}