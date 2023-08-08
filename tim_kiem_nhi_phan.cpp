#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int check(int a[], int n, int x){
    int l=0;
    int r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            return 1;
        }
        if(a[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    return 0;
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
        int n, x;
        cin>>n>>x;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        if(check(a, n, x))
            cout<<1<<endl;
        else
            cout<<-1<<endl;   
    }   
    return 0;
}