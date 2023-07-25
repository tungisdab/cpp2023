#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
vector<pair<ll, float>> a;

bool cmp(pair<ll, float> a, pair<ll, float> b){
    return a.second >= b.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    for (ll i=0;i<n;i++){
        ll x, b, c;
        float d;
        cin>>x>>b>>c;
        d =b*0.7 + c*0.3;
        a.push_back({x, d});
    }
    stable_sort(a.begin(), a.end(), cmp);
    int m= a.size();
    if(m>=7){
        for (ll i=0;i<7;i++){
            cout<<a[i].first<<" ";
        }
    }
    else{
        for (ll i=0;i<m;i++){
            cout<<a[i].first<<" ";
        }
    }
    return 0;
}