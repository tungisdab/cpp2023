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
        ll n, m;
        cin>>n;
        while(n>=10){
            m=0;
            while(n>0){
                m+=n%10;
                n/=10;
            }
            n=m;
        }   
        cout<<n<<endl;
    }   
    return 0;
}