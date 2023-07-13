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
        int k;
        cin>>n>>k;
        int kq=-1;
        int cnt=0;
        for (int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                cnt++;
                if(cnt==k){
                    kq=i;
                    break;
                }
                n/=i;
            }
        }   
        if(n>1 && (cnt+1)==k)
            kq=n;
        cout<<kq;
        cout<<endl;
    }
    return 0;
}