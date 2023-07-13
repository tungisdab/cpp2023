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
    ll n;
    cin>>n;
    ll s=1;
    ll ans=0;
    for (int i=1;i<=n;i++){
        ans+=s*i;
        s*=i;
    }
    cout<<ans<<endl;
    return 0;
}