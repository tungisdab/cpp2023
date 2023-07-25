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
        int m=a[0];
        for (int i=1;i<n;i++){
            m=__gcd(a[i], m);
        }   
        cout<<m<<endl;
        int cnt=0;
        for(int i=2;i<=sqrt(m);i++){
            if(m%i==0){
                cnt+=2;
            }
        }
        if(sqrt(m)==(int)sqrt(m))
            cnt--;
        cout<<m<<endl;
    }   
    return 0;
}