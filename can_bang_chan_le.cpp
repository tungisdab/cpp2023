#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int check(int n){
    int c=0, l=0;
    while(n>0){
        int x=n%10;
        n/=10;
        if(x%2)
            c++;
        else
            l++;
    }
    if(c==l)
        return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int cnt=0;
    for (int i=pow(10,n-1);i<pow(10,n);i++){
        if(check(i)){
            cout<<i<<" ";
            cnt++;
        }
        if(cnt%10==0){
            cout<<endl;
        }
    }   
    return 0;
}