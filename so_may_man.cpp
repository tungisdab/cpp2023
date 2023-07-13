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
        string s;
        getline(cin, s);
        int n=s.length();
        if(s[n-2]=='8'&&s[n-1]=='6')
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }   
    return 0;
}