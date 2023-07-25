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
        int b[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int x,y;
        for (int i=0;i<n;i++){
            if(a[i]!=b[i]){
                x=i+1;
                break;
            }
        }
        for (int i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                y=i+1;
                break;
            }
        }
        cout<<x<<" "<<y<<endl;
    }   
    return 0;
}