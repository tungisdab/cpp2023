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
        int cc=1;
        int c1=0;
        int c2=0;
        int c3=0;
        int c4=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='@'){
                c1++;
            }
            if(s[i]!='@' && s[i]!='.' && s[i]!='_' && !(s[i]>='a' && s[i]<='z') && !(s[i]>='0' && s[i]<='9') && !(s[i]>='A' && s[i]<='Z')){
                cc=0;
                break;
            }
            if(c1==0){
                c2++;
            }
            if(c1){
                c3++;
            }
            if(s[i]=='.'){
                c4++;
            }
        }
        if(c1!=1)
            cc=0;
        if(c2>64 || c2==0)
            cc=0;
        if(c3>254 || c3==0)
            cc=0;
        if(c4==0 || s[n-1]=='.')
            cc=0;
        if(cc)
            cout<<"YES";
        else    
            cout<<"NO";
        cout<<endl;
    }   
    return 0;
}