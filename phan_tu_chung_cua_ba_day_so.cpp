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
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m],c[k];
        for (int i=0;i<n;i++)
            cin>>a[i];
        for (int i=0;i<m;i++)
            cin>>b[i];
        for (int i=0;i<k;i++)
            cin>>c[i];
        int x=0,y=0,z=0;
        multiset<int> s;
        while(x<n && y<m && z<k){
            if(a[x]==b[y] && b[y]==c[z]){
                s.insert(a[x]);
                x++;
                y++;
                z++;
            }
            else if(a[x]<b[y])
                x++;
            else if(b[y]<c[z])
                y++;
            else
                z++;
        }
        if(s.size()==0)
            cout<<"-1";
        else{
            for(auto i:s)
                cout<<i<<" ";
        }
        cout<<endl;
    }   
    return 0;
}