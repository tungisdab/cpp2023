#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n;
    cin>>n;
    int a[n+10];
    int b[n+10];
    for (int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
        }
    }
    int tong =0;
    tong =a[0]+b[0];
    for (int i=1;i<n;i++){
        if(tong<a[i])
            tong = a[i]+b[i];
        else    
            tong+=b[i];
    }
    cout<<tong;
    return 0;
}