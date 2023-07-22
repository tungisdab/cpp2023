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
        vector<ll> a;
        vector<ll> b;
        for (ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x==0)
                a.push_back(x);
            else 
                b.push_back(x);
        }   
        for(auto i:b)
            cout<<i<<" ";
        for(auto i:a)
            cout<<i<<" ";
        cout<<endl;
    }   
    return 0;
}