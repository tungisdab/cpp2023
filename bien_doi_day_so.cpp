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
        int l=0;
        int r=n-1;
        int cnt=0;
        while(l<r){
            if(a[l]==a[r]){
                l++;
                r--;
            }
            else if(a[l]<a[r]){
                cnt++;
                a[l+1]=a[l]+a[l+1];
                l++;
            }
            else{
                cnt++;
                a[r-1]=a[r]+a[r-1];
                r--;
            }
        }   
        cout<<cnt<<endl;
    }   
    return 0;
}