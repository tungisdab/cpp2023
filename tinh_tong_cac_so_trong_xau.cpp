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
        int m=0;
        vector<int> a;
        for (int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                m=m*10+s[i]-'0';
                if(!(s[i+1]>='0' && s[i+1]<='9') || i==n-1){
                    a.push_back(m);
                    m=0;
                }
            }
        }
        int ans=0;
        for(auto i:a){
            ans+=i;
        }
        cout<<ans<<endl;
    }   
    return 0;
}