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
    while (t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for (ll i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ll cnt=0;
        for(ll i=0;i<n-1;i++){
           ll x = lower_bound(a,a+n,a[i]+k)-a;
           cnt+= x-i-1;
        }
        cout<<cnt<<endl;
    }   
    return 0;
}