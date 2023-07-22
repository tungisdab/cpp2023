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
        int a[n][n];
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++)
                cin>>a[i][j];
        }
        int b[100005] = {0};
        vector<int> c;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if(b[a[i][j]]==i){
                    b[a[i][j]]++;
                }
                if(b[a[i][j]]==n){
                    c.push_back(a[i][j]);
                }
            }
        }
        sort(c.begin(), c.end());
        c.erase(unique(c.begin(), c.end()), c.end());
        cout<<c.size()<<endl;
    }   
    return 0;
}