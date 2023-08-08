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
        int x=INT_MAX;
        int y=INT_MAX;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if(x>(abs(a[i]+a[j]))){
                    x=abs(a[i]+a[j]);
                    y=a[i]+a[j];
                }
            }
        }   
        cout<<y<<endl;
    }   
    return 0;
}