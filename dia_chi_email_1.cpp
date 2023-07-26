#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    string s;   
    getline(cin, s);
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    stringstream ss(s);
    string tmp;
    vector<string> a;
    while(ss>>tmp){
        a.push_back(tmp);
    }
    cout<<a[a.size()-1];
    for(int i=0;i<a.size()-1;i++){
        cout<<a[i][0];
    }
    cout<<"@ptit.edu.vn";
    return 0;
}