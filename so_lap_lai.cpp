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
        ll a, x, y;
        cin>>a>>x>>y;
        ll b=__gcd(x,y);
        while(b--)
            cout<<a;
        cout<<endl;
    }   
    return 0;
}