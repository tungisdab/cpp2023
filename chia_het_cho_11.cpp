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
        cin>>s;
        ll n=s.length();
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum= sum*10+(s[i]-'0');
            sum%=11;
        }   
        if(sum==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }   
    return 0;
}