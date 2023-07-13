#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

bool snt(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int check(ll n)
{
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return 2;
    if (snt(n))
        return n;
    for (ll i = 3; i <= sqrt(n); i=i+2)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        for (ll i=1; i<=n; i++)
            cout<<check(i)<<" ";
        cout << endl;
    }
}