#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int check(int h)
{
    if (h<2) return 0;
    if (h==2||h==3) return 1;
    if (h%2==0||h%3==0) return 0;
    for (int i=5;i<=sqrt(h);i+=6)
        if (h%i==0||h%(i+2)==0)
            return 0;
    return 1;
}
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
        for (int i=2;i<=n/2;i++){
            if(check(i)&&check(n-i)){
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }   
    }   
    return 0;
}