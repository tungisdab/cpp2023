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
        ll a[n], b[m];
        for (ll i=0;i<n;i++)
            cin>>a[i];
        for (ll i=0;i<m;i++)
            cin>>b[i];
        sort(a, a+n);
        sort(b, b+m);
        cout<<a[n-1]*b[0]<<endl;   
    }   
    return 0;
}