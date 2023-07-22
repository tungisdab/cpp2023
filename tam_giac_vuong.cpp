#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int check(vector<ll> a, ll i, ll x){
    ll l=0;
    ll r=i-1;
    while(l<=r){
        if(a[l]+a[r]==x)
            return 1;
        if(a[l]+a[r]<x)
            l++;
        else 
            r--;
    }
    return 0;
}
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
        for (ll i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x*x);
        }
        sort(a.begin(), a.end());
        int cc=0;
        for (ll i=n-1;i>=2;i--){
            if(check(a, i, a[i])){
                cc=1;
                break;
            }
        }   
        if(cc)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }   
    return 0;
}