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
        ll a[n];
        for (ll i=0;i<n;i++)
            a[i]=-1;
        for (ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x>=0 && x<n)
                a[x]=x; 
        }   
        for (ll i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }   
    return 0;
}