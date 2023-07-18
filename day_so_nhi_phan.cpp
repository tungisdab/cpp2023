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
        int a[n];
        int b[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        for (int i=0;i<n;i++)
            cin>>b[i];
        int m=0;
        int k=0;
        for(int i=0;i<n;i++){
            int x=0;
            int y=0;
            for (int j=i;j<n;j++){
                x+=a[j];
                y+=b[j];
                if(x==y)
                    k=j-i+1;
            }
            m=max(m,k);
        }
        cout<<m<<endl;
    }
    return 0;
}