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
        int x=a[0];
        int cc=0;
        for (int i=1;i<n;i++){
            if(x!=a[i]){
                cout<<x<<" "<<a[i]<<endl;
                cc=1;
                break;
            }
        } 
        if(cc==0)
            cout<<-1<<endl;
    }   
    return 0;
}