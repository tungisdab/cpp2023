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
        int cc=1;
        for (int i=0;i<n-1;i++){
            if(abs(s[i]-s[i+1])!=1){
                cc=0;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(cc)
            cout<<"YES"<<endl;

    }   
    return 0;
}