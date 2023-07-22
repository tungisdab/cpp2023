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
    while (t--)
    {
        int n;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin, s);
        set<int> a; 
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                a.insert(int(s[i]-'0'));
            }
        }  
        for(auto i:a)
            cout<<i<<" ";
        cout<<endl;
    }   
    return 0;
}