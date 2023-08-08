#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    string s;
    getline(cin, s);
    int n=s.length();
    for (int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            if(s[i]=='A'){
                s[i]='Y';
            }
            else if(s[i]=='B'){
                s[i]='Z';
            }
            else
                s[i]=s[i]-2;
        }
        else if(s[i]>='a' && s[i]<='z'){    
            if(s[i]=='y')
                s[i]='a';
            else if(s[i]=='z'){
                s[i]='b';
            }
            else{
                s[i]=s[i]+2;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}