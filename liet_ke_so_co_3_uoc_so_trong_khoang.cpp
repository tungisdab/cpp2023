#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int nto(int n){
    if(n<2)
        return 0;
    if(n<4)
        return 1;
    if(n%2==0)
        return 0;
    for (int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        int cnt=0;
        for (int i=a;i<=sqrt(b);i++){
            if(nto(i))
                cnt++;
        }
        cout<<cnt<<endl;
    }   
    return 0;
}