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
    int n;
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cin>>a[i][j];
    }
    int m;
    cin>>m;
    int b[m][m];
    for (int i=0;i<m;i++){
        for (int j=0;j<m;j++)
            cin>>b[i][j];
    }   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]*=b[i%m][j%m];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}