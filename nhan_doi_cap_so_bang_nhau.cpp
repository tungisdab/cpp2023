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
        for (int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                a[i]*=2;
                a[i+1]=0;
            }
        }   
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]){
                cnt++;
                cout<<a[i]<<" ";
            }
        }
        cnt=n-cnt;
        while(cnt--)
            cout<<"0"<<" ";
        cout<<endl;
    }   
    return 0;
}