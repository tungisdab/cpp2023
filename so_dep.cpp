#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int check(string s){
    for (int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i])
            return 0;
    }
    return 1;
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
        int n = s.length();
        int cc=0;
        for(int i=0;i<n;i++){
            if((s[i]-'0')%2==1){
                cc=1;
                break;
            }
        }
        if(cc==0 && check(s)){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }   
    return 0;
}