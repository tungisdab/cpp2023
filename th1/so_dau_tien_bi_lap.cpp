#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        int cc=0;
        for (ll i=0;i<n;i++){
            cin>>a[i];
        }
        for (ll i=0;i<n-1;i++){
            for (ll j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    cc=1;
                    cout<<a[i]<<endl;
                    break;
                }
            }
            if(cc)
                break;
        }
        if(!cc)
            cout<<"NO"<<endl;          
    }
    return 0;
}