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
        int n;
        int m;
        cin>>n>>m;
        int z[n];
        for (int i=0;i<n;i++)
            cin>>z[i];
        for (int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            int ans=0;
            for (int i=a;i<=b;i++){
                ans+=z[i-1];
            }
            cout<<ans<<endl;
        }   
    }   
    return 0;
}