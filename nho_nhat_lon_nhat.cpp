#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n, m;
    cin>>n>>m;
    if (n==1 && m==0)
    {
        cout<<0<<" "<< 0;
        return 0;
    }
    if((m==0) || (9*n<m)){
        cout<<-1<<" "<<-1;
        return 0;
    }
    int a[n]={0};
    int mm=m;
    a[0]=1;
    m--;
    int i=n-1;
    while(m>0){
        if(m>=9){
            a[i--]+=9;
            m-=9;
        }
        else{
            a[i--]+=m;
            m=0;
        }
    }
    int b[n]={0};
    int j=0;
    while(mm>0){
        if(mm>=9){
            b[j++]+=9;
            mm-=9;
        }
        else{
            b[j++]+=mm;
            mm=0;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i];
    cout<<" ";
    for (int i=0;i<n;i++)
        cout<<b[i];
    return 0;
}