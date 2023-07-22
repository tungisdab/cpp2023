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
        int n,m;
        cin>>n>>m;
        set<int> a;
        set<int> b;
        set<int> s;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            a.insert(x);
            s.insert(x);
        }     
        for (int i=0;i<m;i++){
            int x;
            cin>>x;
            b.insert(x);
            s.insert(x);
        }
        for(auto i:s)
            cout<<i<<" ";
        cout<<endl;
        for(auto i:a){
            if(b.count(i))
                cout<<i<<" ";
        }
        cout<<endl;
    }   
    return 0;
}