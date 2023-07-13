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
    db s=0;
    for (int i=1;i<=n;i++){
        s+=1.0/i;
    }   
    cout<<fixed<<setprecision(4)<<s<<endl;
    return 0;
}