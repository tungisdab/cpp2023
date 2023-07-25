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
    cin.ignore();
    while (t--)
    {
        string ss;
        getline(cin, ss);
        int n = ss.length();
        vector<char> s;
        for(int i=0; i<n;i++){
            if(ss[i] >= '0' && ss[i] <= '9'){
                s.push_back(ss[i]);
            }
        }   
        if(s[0]=='8' && s[1]=='4'){
            cout<<"0";
            for (int i=2;i<s.size();i++){
                cout<<s[i];
            }
        }
        else{
            for (int j=0;j<s.size();j++)
                cout<<s[j];
        }
        cout<<endl;
    }   
    return 0;
}