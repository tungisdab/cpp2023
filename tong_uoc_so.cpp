#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
ll nto(ll n){
    if(n<2)
        return 0;
    if(n<4)
        return 1;
    if(n%2==0)
        return 0;
    for (int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return 0;
    }
    return 1;
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
        ll n;
        cin>>n;
        ll ans=n+1;
        ll m=n;
        if(n==0 || n==1)
        {
            cout<<n<<endl;
            continue;
        }
        if(nto(n)){
            cout<<n+1<<endl;
            continue;
        }
        for (ll i=2;i<=sqrt(n);i++){
            while(n%i==0){
                ans+=i;
                n/=i;
            }
        }   
        if(n>1)
            ans+=n;
        cout<<ans<<endl;
    }   
    return 0;
}