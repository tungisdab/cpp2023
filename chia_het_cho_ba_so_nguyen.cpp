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
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        ll p=pow(10, n-1);
        ll q=pow(10, n)-1;
        ll y = a*b/__gcd(a,b);
        ll x = y*c/__gcd(y,c);
        int cc=0;
        for (ll i=(p/x);i<=(q/x)+1;i++){
            if((i*x)>=p && (i*x)<=q){
                cc=1;
                cout<<(i*x)<<endl;
                break;
            }
        }    
        if(!cc)
            cout<<-1<<endl;
    }   
    return 0;
}