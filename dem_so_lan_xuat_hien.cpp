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
        int cnt=0;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==k){
                cnt++;
            }            
        }   
        if(cnt)
            cout<<cnt;
        else
            cout<<-1;
        cout<<endl;
    }   
    return 0;
}