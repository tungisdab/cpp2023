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
        int cc=0;
        char m=47;
        int vt=0;
        for (int i=n-2;i>=0;i--){
            for (int j=i+1;j<n;j++){
                if(s[i]>s[j]){
                    if(s[j]>m){
                        m=s[j];
                        vt=j;
                        cc=1;
                    }
                }
            }
            if(cc){
                swap(s[i], s[vt]);
                break;
            }
        }
        if(cc==1 && s[0]=='0')
            cout<<"-1";
        if(cc==0)
            cout<<"-1";
        else if(cc==1)
            cout<<s;
        cout<<endl;
    }

    return 0;
}