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
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        string s;
        int l, r;
        cin>>l>>r;
        for (int i=l+1;i<=r;i++){
            if(a[i-1]<a[i])
                s+="1";
            else if(a[i-1]>a[i])
                s+="0";
        }
        if(s.find("01") != -1)
            cout<<"No"<<endl;
        else 
            cout<<"Yes"<<endl;
    }   
    return 0;
}