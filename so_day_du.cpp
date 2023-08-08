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
        set<char> a;
        int cc=0;
        if(s[0]=='0'){
            cc=1;
        }
        for (int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9')
                a.insert(s[i]);
            else{
                cc=1;
                break;
            }
        }
        if(cc){
            cout<<"INVALID";
        }
        else{
            if(a.size()==10){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        cout<<endl;
    }   
    return 0;
}