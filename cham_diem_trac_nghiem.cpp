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
    string a="ABBADCCABDCCABD";
    string b="ACCABCDDBBCDDBB";
    while (t--)
    {
        string s;
        getline(cin,s);
        char x=s[2];
        int cnt=0;
        if(x=='1'){
            for (int i=4;i<33;i+=2){
                if(s[i]==a[i/2-2])
                    cnt++;
            }   
        }
        else{
            for (int i=4;i<33;i+=2){
                if(s[i]==b[i/2-2])
                    cnt++;
            }  
        }
        cout<<fixed<<setprecision(2)<<10.0*cnt/15<<endl;
    }   
    return 0;
}