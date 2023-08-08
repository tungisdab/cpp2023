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
        int n, x;
        cin>>n>>x;
        int a[n];
        set<int> b;
        for (int i=0;i<n;i++){
            cin>>a[i];
            b.insert(a[i]);
        }   
        int cc=0;
        for (int i=0;i<n;i++){
            if(b.count(a[i]-x)!=0){
                cc=1;
                break;
            }
        }
        if(cc){
            cout<<1<<endl;
        }
        else
            cout<<-1<<endl;
    }   
    return 0;
}