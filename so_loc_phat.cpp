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
        string s;
        cin>>s;
        int n = s.length();
        int cc = 0;
        for (int i=0;i<n;i++){
            if(s[i]!='0'&&s[i]!='6'&&s[i]!='8'){
                cc=1;
                cout<<"NO"<<endl;
                break;
            }
        }   
        if(!cc)
            cout<<"YES"<<endl;
    }   
    return 0;
}