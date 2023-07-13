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
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n);
        int k =INT_MAX;
        for (int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<k)
                k=a[i+1]-a[i];
        }
        cout<<k<<endl;
    }   
    return 0;
}