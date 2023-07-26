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
        int a[10006]={0};
        getline(cin, s);
        int n=s.length();
        for(int i=0;i<n;i++)
            a[s[i]]++;
        for(int i=0;i<n;i++){
            if(a[s[i]]==1)
                cout<<s[i];
        }
        cout<<endl;
    }   
    return 0;
}