#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
bool cmp(int a, int b){
    string s1=to_string(a);
    string s2=to_string(b);
    return s1+s2>s2+s1;
}
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
        sort(a, a+n, cmp);
        for (int i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;   
    }   
    return 0;
}