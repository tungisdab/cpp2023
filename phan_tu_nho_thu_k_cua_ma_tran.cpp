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
        int n,k,x=0;
        cin>>n>>k;
        int a[10005];
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin>>a[x++];
            }
        }
        sort(a,a+x);
        cout<<a[k-1]<<endl;
    }
    return 0;
}