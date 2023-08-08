#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        cin.ignore();
        string s;
        getline(cin, s);
        int n=s.length();
        if(s[0]=='0');
        for (int i=0;i<n-4;i++){
            cout<<s[i];

        }   
        int z=(s[n-4]-'0')*1000+(s[n-3]-'0')*100+(s[n-2]-'0')*10+(s[n-1]-'0')+x;
        // if(z<10)
        //     cout<<0<<z<<endl;
        // else
        //     cout<<(s[n-2]-'0')*10+(s[n-1]-'0')+x<<endl;
        cout<<z<<endl;
    }   
    return 0;
}