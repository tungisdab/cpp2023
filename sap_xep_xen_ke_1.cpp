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
        for (int i=0;i<n;i++)   
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n/2;i++){
            cout<<a[n-i-1]<<" "<<a[i]<<" ";
        }   
        if(n%2)
            cout<<a[n/2];
        cout<<endl;
    }   
    return 0;
}