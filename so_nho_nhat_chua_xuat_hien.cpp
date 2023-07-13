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
        int n=0;
        int m;
        cin>>m;
        int a[m];
        for (int i=0;i<m;i++){
            int x;
            cin>>x;
            if(x>0)
                a[n++]=x;
        }            
        sort(a,a+n);
        if(a[0]>1 || n==0){
            cout<<"1";
        }   
        else if(n==1 && a[0]==1){
            cout<<"2";
        }
        else{
            int cc=0;
            for (int i=1;i<n;i++){
                if(a[i-1]+1<a[i]){
                    cc=1;
                    cout<<a[i-1]+1;
                    break;
                }
            }
            if(cc==0)
                cout<<a[n-1]+1;
        }
        cout<<endl;
    }   
    return 0;
}