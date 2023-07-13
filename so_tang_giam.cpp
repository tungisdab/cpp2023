#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int nto(int n){
    if(n<2) return 0;
    if(n<4) return 1;
    if(n%2==0 || n%3==0) return 0;
    for (int i=5;i<=sqrt(n);i+=6){
        if(n%i==0 || n%(i+2)==0)
            return 0;
    }
    return 1;
}
bool tang(int x)
{
    int t = x % 10;
    x /= 10;
    while (x > 0)
    {
        if (t <= x % 10)
            return false;
        t = x % 10;
        x /= 10;
    }

    return true;
}

bool giam(int x)
{
    int t = x % 10;
    x /= 10;
    while (x > 0)
    {
        if (t >= x % 10)
            return false;
        t = x % 10;
        x /= 10;
    }

    return true;
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
        int cnt=0;
        for (int i=pow(10, n-1);i<pow(10,n);i++){
            if(tang(i) || giam(i)){
                if(nto(i))
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }   
    return 0;
}
