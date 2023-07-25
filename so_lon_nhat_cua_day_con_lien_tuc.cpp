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
        int n, k;
        cin>>n>>k;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        multiset<int> b;
        for(int i=0;i<k;i++){
            b.insert(a[i]);
        }
        cout<<*b.rbegin()<<" ";
        for(int i=k;i<n;i++){
            b.erase(b.find(a[i-k]));
            b.insert(a[i]);
            cout<<*b.rbegin()<<" ";
        }
        cout<<endl;
    }   
    return 0;
}