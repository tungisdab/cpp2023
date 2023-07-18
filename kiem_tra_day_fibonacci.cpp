#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int a[94];
void fibo(){
    a[0]=0;
    a[1]=1;
    for (int i=2;i<=93;i++)
        a[i]=a[i-1]+a[i-2];
}
int main()
{
    fibo();
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            for (int j=0;j<94;j++){
                if(x==a[j]){
                    cout<<x<<" ";
                    break;
                }
            }
        }
        cout<<endl;   
    }
    return 0;
}