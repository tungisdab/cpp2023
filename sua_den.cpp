#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int a[1000005]={0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, b;
    cin>>n>>k>>b;
    for (int i=0;i<b;i++){
        int x;
        cin>>x;
        a[x]=1;
    }
    int s=0;
    for(int i=1;i<=k;i++){
        if(a[i])
            s++;
    }
    int ans=s;
    for(int i=k+1;i<=n;i++){
        s=s-a[i-k]+a[i];
        ans=min(ans, s);
    }
    cout<<ans<<endl;
    return 0;
}