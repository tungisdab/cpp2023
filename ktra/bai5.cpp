#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n;
    cin>>n;
    float a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }   
    float cnt=0;
    sort(a, a+n);
    float x=a[0];
    float y=a[n-1];
    int b=0;
    for (int i=1;i<n-1;i++){
        if(a[i]!= x && a[i]!=y){
            cnt+=a[i];
            b++;
        }
    }
    cout<<fixed<<setprecision(2)<<cnt/b<<endl;
    return 0;
}