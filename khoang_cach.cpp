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
        db a, b, c, d;
        cin>>a>>b>>c>>d;
        cout<<fixed<<setprecision(4)<<sqrt((a-c)*(a-c)+(b-d)*(b-d))<<endl;   
    }   
    return 0;
}