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
        int a,m;
        cin>>a>>m;
        int cc=0;
        for (int i=0;i<m;i++){
            if((a*i)%m==1){
                cout<<i;
                break;
            }
            if(i==m-1)
                cc=1;
        }
        if(cc)
            cout<<"-1";
        cout<<endl;
    }   
    return 0;
}