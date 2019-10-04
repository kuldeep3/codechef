#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2,sum,diff;
    cin>>n1>>n2;
    if (n1>n2)
    {
        diff=n1-n2;
        cout<<diff<<endl;
    }
    else
    {
        sum=n1+n2;
        cout<<sum<<endl;
    }
    
    return 0;
    }