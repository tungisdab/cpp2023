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
        int n=s.length();
        vector<char> a;
        int ans=0;
        for (int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                a.push_back(s[i]);
            }
            else{
                ans+=(s[i]-'0');
            }
        }
        sort(a.begin(), a.end());
        for(auto i:a)
            cout<<i;
        cout<<ans<<endl;
    }
    return 0;
}