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
        int cc=0;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            if(cc==0 && x==k){
                cnt=i+1;
                cc=1;
            }
            a.push_back(x);
        }
        cout<<cnt<<endl;
    }   
    return 0;
}