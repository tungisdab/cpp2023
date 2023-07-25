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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        ll n;
        cin>>n;
        ll xx = 1e8;
        ll cnt=0;
        for (ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x<0){
                cnt+=abs(x);
            }
        }   
        if(cnt>=xx)
            cout<<"YES";
        else    
            cout<<"NO";
        cout<<endl;
        cin.ignore();
    }   
    return 0;
}