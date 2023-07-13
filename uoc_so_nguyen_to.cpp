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
        ll n;
        cin>>n;
        for (int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                cout<<i<<" ";
                n/=i;
            }
        }
        if(n>1)
            cout<<n;
        cout<<endl;
    }
    return 0;
}