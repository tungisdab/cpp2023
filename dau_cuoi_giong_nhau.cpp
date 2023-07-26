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
        string s;
        getline(cin, s);
        int n=s.length();
        int cnt=n;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if(s[i]==s[j])
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }   
    return 0;
}