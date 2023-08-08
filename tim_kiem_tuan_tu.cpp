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
        vector<int> a;
        int n, x;
        cin>>n>>x;
        for (int i=0;i<n;i++){
            int z;
            cin>>z;
            a.push_back(z);
        }   
        int m= distance(a.begin(),find(a.begin(), a.end(), x));
        if(m!=n)
            cout<<m+1;
        else
            cout<<-1;
        cout<<endl;
    }   
    return 0;
}