#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int aa[1000005]={0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        memset(aa,0,sizeof(aa));
        int n, m;
        cin>>n>>m;
        vector<int> a;
        vector<int> b;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            aa[x]++;
            a.push_back(x);
        }
        for (int i=0;i<m;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        for(auto i:b){
            int x=aa[i];
            for(int j=0;j<x;j++){
                cout<<i<<" ";
                aa[i]=0;
            }
        }
        vector<int> c;
        for(auto i:a){
            if(aa[i]){
                c.push_back(i);
            }
        }
        sort(c.begin(),c.end());
        for(auto i:c){
            cout<<i<<" ";
        }
        cout<<endl;
    }   
    return 0;
}