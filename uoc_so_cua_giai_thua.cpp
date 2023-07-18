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
        int n,p;
        cin>>n>>p;
        int cnt=0;
        for (int i=2;i<=n;i++){
            int j=i;
            while(j%p==0){
                cnt++;
                j/=p;
            }
        }
        cout<<cnt<<endl;
    }   
    return 0;
}