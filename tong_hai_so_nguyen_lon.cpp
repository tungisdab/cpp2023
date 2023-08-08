#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
void tong(string a, string b){
    int q=b.length()-a.length();
    for(int i=1;i<=q;i++){
        a='0'+a;
    }
    int n=b.length();
    vector<int> c;
    int x=0;
    for (int i=n-1;i>=0;i--){
        int m=a[i]-'0'+b[i]-'0'+x;
        if(m>=10){
            x=1;
            c.push_back(m-10);
        }
        else{
            x=0;
            c.push_back(m);
        }
    }
    if(x)
        cout<<1;
    for (int i=0;i<n;i++)
        cout<<c[n-i-1];
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {   
        string a, b;
        cin>>a>>b;
        if(a.length()<b.length()){
            tong(a,b);
        }
        else{
            tong(b,a);
        }
        cout<<endl;
    }
    return 0;
}