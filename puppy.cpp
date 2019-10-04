#include <bits/stdc++.h>
using namespace std;

int sum(int b) {
    int res = (b*(b+1))/2;
    return res;
}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int d,n;
        cin>>d>>n;
        int res=sum(n);
        for (int i = 1; i < d; i++)
        {
            res = sum(res);
        }
        cout<<res<<endl;
    }
    return 0;
}
