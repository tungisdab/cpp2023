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
        ll n;
        cin>>n;
        ll ans=0;
        for (int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ans+=i;
                ans+=n/i;
            }
        }   
        if(sqrt(n)==(int)sqrt(n))
            ans-=(int)sqrt(n);
        cout<<ans<<endl;
    }   
    return 0;
}