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
        int n, k;
        cin>>n>>k;
        vector<int> a;
        int cnt=0;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=k){
                cnt++;
                a.push_back(1);
            }
            else
                a.push_back(0);
        }
        int m=0;
        for(int i=0;i<cnt;i++)
            m+=a[i];
        int M=m;
        for(int i=cnt;i<n;i++){
            m=m-a[i-cnt]+a[i];
            M=max(M,m);
        }
        cout<<cnt-M<<endl;
    }   
    return 0;
}