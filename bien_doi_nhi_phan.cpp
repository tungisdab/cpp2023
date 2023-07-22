#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
int n, m;
int a[1005][1005];
int b[1005][1005];
void change(int x){
    for(int i=0;i<n;i++)
        b[i][x]=1;
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
        cin>>n>>m;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cin>>a[i][j];
                b[i][j]=a[i][j];
            }
        }   
        for (int i=0;i<n;i++){
            int cc=0;
            for (int j=0;j<m;j++){
                if(a[i][j]){
                    change(j);
                    cc=1;
                }
            }
            if(cc){
                for (int j=0;j<m;j++)
                    b[i][j]=1;
            }
            
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++)
                cout<<b[i][j]<<" ";
            cout<<endl;
        }
    }   
    return 0;
}