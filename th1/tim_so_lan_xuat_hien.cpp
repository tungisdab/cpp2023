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
        int n, x;
        cin>>n>>x;
        int cnt=0;
        for (int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==x)
                cnt++;
        }   
        cout<<cnt<<endl;
    }
    return 0;
}