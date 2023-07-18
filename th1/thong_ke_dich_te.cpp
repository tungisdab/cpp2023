#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll a[n+10][m+10];
    ll b[n+10][m+10];
    for (ll i=1;i<=n;i++){
        for (ll j=1;j<=m;j++){
            cin>>b[i][j];
            a[i][j]=0;
        }
    }   
    ll mx[10]={-1,-1,-1,0,0,1,1,1};
    ll my[10]={-1,0,1,-1,1,-1,0,1};
    for (ll i=1;i<=n;i++){
        for (ll j=1;j<=m;j++){
            if(b[i][j]==-1){
                for(ll k=0;k<8;k++){
                    if(i+mx[k]>=1 && i+mx[k]<=n && j+my[k]>=1 && j+my[k]<=m && b[i+mx[k]][j+my[k]]>=0)
                        a[i+mx[k]][j+my[k]]=1;
                }
            }
        }
    }
    ll tong =0;
    for (ll i=1;i<=n;i++){
        for (ll j=1;j<=m;j++){
            if(a[i][j]==1 && b[i][j] >= 0)
                tong+=b[i][j];
        }
    }
    cout<<tong<<endl;
    return 0;
}