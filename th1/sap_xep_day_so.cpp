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
        ll n, z;
        cin>>n>>z;
        vector<int> a;
        vector<int> b;
        ll m=INT_MIN;
        int cc=0;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>m)
                m=x;
            if(x<0)
                a.push_back(x);
            else{
                b.push_back(x);
            }
        }
        for(auto i:a){
            if(cc==0){
                if(m==i){
                    cout<<z<<" ";
                    cc=1;
                }
            }
            cout<<i<<" ";

        }
        for(auto i:b){
            if(cc==0){
                if(m==i){
                    cc=1;
                    cout<<z<<" ";
                }
            }
            cout<<i<<" ";
        }
        cout<<endl;
    }   
    return 0;
}