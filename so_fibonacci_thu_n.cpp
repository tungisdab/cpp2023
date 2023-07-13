#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
ll a[94];
void sang(){
    a[0]=0;
    a[1]=1;
    a[2]=1;
    for (int i=3;i<94;i++)
        a[i]=a[i-1]+a[i-2];
}
int main()
{
    sang();
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        cout<<a[n]<<endl;   
    }
    return 0;
}