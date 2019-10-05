#include <bits/stdc++.h>
using namespace std;

int nextprimeno(int n);
bool isprime(int n);

int nextprimeno(int n) {
    int nxtprime = n;
    bool found = false;
    while (!found)
    {
        nxtprime++;
        if (isprime(nxtprime))
        {
            found = true;
        }
    }
  return nxtprime;  
}
bool isprime(int n) {
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            return false;
        }        
    }
return true;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int sum = x+y;
        int result = nextprimeno(sum)-sum;
        cout<<result<<endl;
    }
    
}