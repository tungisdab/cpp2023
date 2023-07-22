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
        int n, k;
        cin>>n>>k;
        int a[n];
        int cnt=0;
        for (int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if(a[i]+a[j]==k)
                    cnt++;
                else if(a[i]+a[j]>k)
                    break;
            }
        }   
        cout<<cnt<<endl;
    }   
    return 0;
}