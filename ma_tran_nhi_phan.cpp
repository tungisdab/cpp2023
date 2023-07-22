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
    int n;
    cin>>n;
    int a[n][3];
    int cnt=0;
    for (int i=0;i<n;i++){
        int cc=0;
        for (int j=0;j<3;j++){
            int x;
            cin>>x;
            if(x)
                cc++;
        }
        if(cc>1)
            cnt++;
    }   
    cout<<cnt;
    return 0;
}