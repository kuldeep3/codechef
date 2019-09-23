#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int prod = n*m;
        int sum = n+m;
        int res = prod-sum+1;
        cout<<res<<endl;
    }
    return 0;
}