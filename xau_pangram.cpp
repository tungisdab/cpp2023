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
        scanf("\n");
        string s;
        getline(cin, s);
        int k;
        cin>>k;
        set<char> ss;
        for(int i=0; i<s.length(); i++)
            ss.insert(s[i]);
        if((26-ss.size())<=k)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }   
    return 0;
}