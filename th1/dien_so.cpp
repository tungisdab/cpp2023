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
        set<int> b;
        int c[n];
        int h=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            b.insert(a[i]);
        }
        sort(a,a+n);
        int cnt=0;
        for(auto i:b){
            c[h++]=i;
        }
        for(int i=1;i<h;i++){
            if(c[i]-1>c[i-1])
                cnt+=(c[i]-1-c[i-1]);
        }
        cout<<cnt<<endl;
    }       
    return 0;
}