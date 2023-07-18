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
        if(n> ll(1e12)){
            cout<<0<<endl;
            continue;
        }
        ll m=n;
        ll ans=1;
        for(int i=2;i<sqrt(n);i++){
            if(n%i==0){
                ans+=i;
                ans+=(n/i);
            }
        }   
        int k=sqrt(n);
        if(k*k == n)
            ans += k;
        if(ans==m)
            cout<<1<<endl;
        else    
            cout<<0<<endl;
    }   
    return 0;
}