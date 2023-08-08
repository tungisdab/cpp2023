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
        int k;
        cin>>k;
        cin.ignore();
        string s;
        getline(cin, s);
        for (int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        stringstream ss(s);
        string tmp;
        vector<string> a;
        int n=0;
        while(ss>>tmp){
            a.push_back(tmp);
            n++;
        }
        for(int i=0;i<n;i++){
            a[i][0]=toupper(a[i][0]);
        }
        if(k==1){
            cout<<a[n-1]<<" ";
            for (int i=0;i<n-1;i++){
                cout<<a[i]<<" ";
            }
        }
        else{
            for (int i=1;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<a[0];
        }
        cout<<endl;
    }   
    return 0;
}