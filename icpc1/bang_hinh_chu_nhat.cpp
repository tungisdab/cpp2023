#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    ll a=INT_MAX, b=INT_MAX;
    while (t--)
    {
        ll n, m;
        cin>>n>>m;
        a=min(a, n);
        b=min(b, m);   
    }   
    cout<<a*b;
    return 0;
}