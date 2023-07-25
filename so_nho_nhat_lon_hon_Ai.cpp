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
        vector<int> a;
        vector<int> b;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(b.begin(), b.end());
        for (int i=0;i<n;i++){
            auto x= upper_bound(b.begin(), b.end(),a[i]);
            int y = x-b.begin();
            if(y<n)
                cout<<b[y]<<" ";
            else
                cout<<"_ ";

        }   
        cout<<endl;
    }   
    return 0;
}