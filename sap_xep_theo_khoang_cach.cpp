#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int x;
bool cmp(int a, int b){
    return abs(a-x)<abs(b-x);
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
        cin>>n>>x;
        int a[n];
        for (int i=0;i<n;i++)
            cin>>a[i];
        stable_sort(a, a+n, cmp);
        for (int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }   
    return 0;
}