#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    int even = 0;
    int odd = 0;
    cin>>n;
    int a[n] = {};
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even>odd)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    }
    
    
}