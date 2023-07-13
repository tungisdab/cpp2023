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
    ll n;
    cin>>n;
    int cnt=0;
    if(n==1 || n==0){
        cout<<"NO";
        return 0;
    }
    for (ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cnt=1;
            cout<<"NO";
            break;
        }
    }
    if(!cnt)
        cout<<"YES";
    return 0;
}