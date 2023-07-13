#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int check(int m){
    if(sqrt(m)==(int)sqrt(m)){
        int n = (int)sqrt(m);
        int dem=0;
        for (int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                dem++;
                break;
            }
        }
        if(!dem)
            return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i=4;i<=n;i++){
            if(check(i)){
                cout<<i<<" ";
            }
        }   
        cout<<endl;
    }
    return 0;
}