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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        ll n=s.length();
        ll sum=0;
        ll t=1;
        for(ll i=n-1;i>=0;i--){
            sum= sum+ (s[i]-'0')*t;
            t*=2;
            t=t%10;
            sum = sum%10;
        }
        if(sum%5==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }      
    return 0;
}