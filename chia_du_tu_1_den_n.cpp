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
        ll a,b;
        cin>>a>>b;
        ll ans=0;
        for (ll i=1;i<=a;i++){
            ans += i%b;
        }
        cout<<ans<<endl;
    }   
    return 0;
}