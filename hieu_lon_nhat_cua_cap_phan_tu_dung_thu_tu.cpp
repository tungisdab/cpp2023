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
        cin>>n;
        int a[n];
        int ans=0;
        for (int i=0;i<n;i++)
            cin>>a[i];   
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                ans=max(ans, a[j]-a[i]);
            }
        }
        if(ans>0)
            cout<<ans;
        else
            cout<<-1;
        cout<<endl;
    }   
    return 0;
}