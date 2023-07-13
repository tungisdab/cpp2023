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
        int d;
        cin>>n>>d;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        for (int i=d;i<n;i++)
            cout<<a[i]<<" ";
        for (int i=0;i<d;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }   
    return 0;
}