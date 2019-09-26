#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int result;
    while (t--)
    {
        int b;
        cin>>b;
        int x=b/2;
        x=x-1;
        result = (x*(x+1))/2;
        cout<<result<<endl;    
    }
    return 0;
}