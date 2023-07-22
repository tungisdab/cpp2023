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
        ll n,m;
        cin>>n>>m;
        vector<ll> a;
        for (int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }   
        for (int i=0;i<m;i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        for(auto i:a)
            cout<<i<<" ";
        cout<<endl;
    }   
    return 0;
}