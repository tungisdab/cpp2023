#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
long long GCD(ll a, ll b){
    if (b==0) return a;
    return GCD(b,a%b);
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
        ll n, x=1;
        cin>>n;
        for (ll i=2;i<=n;i++){
            x=(x*i/GCD(x,i));
        }   
        cout<<x<<endl;
    }
    return 0;
}