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
        ll a, b;
        cin>>a>>b;
        ll x=__gcd(a,b);
        ll y= a*b/x;
        cout<<y<<" "<<x<<endl;   
    }   
    return 0;
}