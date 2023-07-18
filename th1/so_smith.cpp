#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
ll tinh(ll n){
    if(n<10)
        return n;
    ll sum=n%10;
    n/=10;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;
    ll ans=tinh(n);
    ll cnt=0;   
    for (int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            cnt+=tinh(i);
            n/=i;
        }
    }
    if(n>1)
        cnt+=tinh(n);
    if(cnt==ans)
        cout<<"YES";
    else    
        cout<<"NO";
    cout<<endl;
    return 0;
}