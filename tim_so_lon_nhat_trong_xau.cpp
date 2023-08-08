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
        string mm="";
        for (int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                mm+=s[i];
                if(!(s[i+1]>='0' && s[i+1]<='9') || i==n-1){
                    m= max(m, stoi(mm));
                    mm="";
                }
            }
        }
        cout<<m<<endl;
    }
    return 0;
}