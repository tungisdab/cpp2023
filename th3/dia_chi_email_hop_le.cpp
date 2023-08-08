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
        getline(cin, s);
        bool check = true;
        int n=s.length();
        int a1=0,a2=0,a3=0, a4=0;
        for(int i=0;i<n;i++){
            if(s[i]=='@'){
                a1++;
            }
            if(s[i]!='@' && s[i]!='.' && s[i]!='_' && !(s[i]>='a' && s[i]<='z') && !(s[i]>='0' && s[i]<='9') && !(s[i]>='A' && s[i]<='Z')){
                check=false;
                break;
            }
            if(s[i]=='.'){
                a4++;
            }
            if(a1==0){
                a2++;
            }
            if(a1==1){
                a3++;
            }
        }
        if(a1!=1)
            check=false;
        if( a2>64 || a2==0 || a3>254 || a3==0 || a4==0 || s[n-1]=='.')
            check=false;
        if(check)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}