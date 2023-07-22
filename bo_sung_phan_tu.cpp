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
        int cnt=0;
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n);
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>1)
                cnt+=(a[i]-a[i-1]-1);
        }    
        cout<<cnt<<endl;
    }   
    return 0;
}