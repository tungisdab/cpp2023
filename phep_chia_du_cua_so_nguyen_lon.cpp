#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        ll k;
        cin>>k;
        ll sum=(s[0]-'0')%k;
        for (int i=1;i<n;i++){
            sum=sum*10+(s[i]-'0');
            sum%=k;
        }
        cout<<sum<<endl;
    }   
    return 0;
}