#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
ll tinh(ll n){
    ll sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin>>s;
        ll sum=0;
        for (int i=0;i<s.length();i++){
            sum+=s[i]-'0';
        }
        while(s.length()>1){
            sum=tinh(sum);
            s=to_string(sum);
        }
        if(sum==9)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }   
    return 0;
}