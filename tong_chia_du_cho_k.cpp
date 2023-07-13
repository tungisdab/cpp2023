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
        ll n,k;
        cin>>n>>k;
        ll ans=0;
        for (int i=1;i<=n;i++)
            ans += i%k;
        if(ans==k)
            cout<<"1";
        else    
            cout<<"0";
        cout<<endl;    
    }   
    return 0;
}