#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    string s;
    getline(cin, s);  
    int n=0;
    for (int i=0;i<s.length();i++)
        s[i]=tolower(s[i]);
    stringstream ss(s);
    string tmp;
    vector<string> a;
    while(ss>>tmp){
        a.push_back(tmp);
        n++;
    }
    for(int i=0;i<a[n-1].size();i++){
        a[n-1][i]=toupper(a[n-1][i]);
    }
    for(int i=0;i<n-1;i++){
        a[i][0]=toupper(a[i][0]);
    }
    for(int i=0;i<n-1;i++){
        if(i!=n-2)
            cout<<a[i]<<" ";
        else
            cout<<a[i]<<", ";
    }
    cout<<a[n-1];
    return 0;
}