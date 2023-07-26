#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int c1(vector<int> s){
    for (int i=1;i<s.size();i++){
        if(s[i]-s[i-1]!=1)
            return 0;
    }
    return 1;
}
int c2(vector<int> s){
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1])
            return 0;
    }
    return 1;
}
int c3(vector<int> s){
    if((s[0]==s[1] && s[1]==s[2]) && (s[3]==s[4]) && (s[0] != s[4]))
        return 1;
    return 0;
}
int c4(vector<int> s){
    for(int i=0;i<s.size();i++){
        if(s[i]!=6 && s[i]!=8)
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
        string ss;
        getline(cin, ss);
        vector<int> s;
        int cc=0;
        for (int i=0;i<ss.length();i++){
            if(ss[i]>='0' && ss[i]<='9' && cc==1 ){
                s.push_back(ss[i]-'0');
            }
            if(ss[i]=='-'){
                cc=1;
            }
        }
        if(c1(s) || c2(s) || c3(s) || c4(s)){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}