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
        int n;
        cin>>n;
        for (int i=2;i<=sqrt(n);i++){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            if(cnt)
                cout<<i<<" "<<cnt<<" ";
        }   
        if(n>1)
            cout<<n<<" "<<"1";
        cout<<endl;
    }
    return 0;
}