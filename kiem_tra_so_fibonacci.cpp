#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
ll a[94];
void fibo()
{
    a[0]=0;
    a[1]=1;
    for (ll i=2;i<=93;i++)
        a[i]=a[i-1]+a[i-2];
}
int main()
{
    int t;
    cin>>t;
    fibo();
    while (t--)
    {
        ll n;
        cin>>n;
        int cc=0;
        for (int i=0;i<94;i++){
            if(a[i]==n){
                cc=1;
                cout<<"YES";
                break;
            }
        }
        if(!cc)
            cout<<"NO";
        cout<<endl;
    }   
    return 0;
}