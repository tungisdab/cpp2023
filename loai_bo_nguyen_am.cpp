#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    string s;
    getline(cin, s);
    for (int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
        if(s[i]!='a' &&s[i]!='e' &&s[i]!='i' &&s[i]!='o' &&s[i]!='u' &&s[i]!='y'){
            cout<<"."<<s[i];
        }
    }
    return 0;
}