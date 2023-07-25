#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int a[100005];
int b[100005]={0};
vector<pair<int, int>> c;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
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
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        int n;
        cin>>n;
        set<int> d;
        for (int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
            d.insert(a[i]);
        }   
        for(auto i:d){
            c.push_back({i,b[i]});
        }
        sort(c.begin(), c.end(), cmp);
        for(auto i:c){
            int x=i.second;
            while(x--)
                cout<<i.first<<" ";
            
        }
        cout<<endl;
        c.clear();
    }
    return 0;
}