#include <bits/stdc++.h>
using namespace std;

int first(int n) {
    while (n>=10)
        {
            n=n/10;
        }
        return n;
}
int last(int n) {
    return(n%10);
}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum;
        cin>>n;
        sum = first(n)+last(n);
        cout<<sum<<endl;
    }
    
}