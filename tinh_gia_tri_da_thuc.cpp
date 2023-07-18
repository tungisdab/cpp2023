#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long e = 1e9+7;
//by KMA dil and man
long long POWER(ll x, ll i){
    if(i==0)
        return 1;
    if(i==1)
        return x;
    if(i%2==0)
        return POWER(x*x %e, i/2)%e;
    else
        return x*POWER(x*x %e, i/2)%e;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        ll ans=0;
        for(ll i=n-1;i>=0;i--) 
            cin>>a[i];
        if(n==0){
            cout<<0<<endl;
            continue;
        }
        for(ll i=n-1;i>=0;i--){
            ans = ans + a[i]*POWER(x, i) % e;
            ans%=e;
        }
        cout<<ans<<endl;        
    }
    return 0;
}