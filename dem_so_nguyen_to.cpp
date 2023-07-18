#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man    
int mangnt[20005]={};
void sang()
{
    for(int i=0;i<=20005;i++)
        mangnt[i]=1;
    mangnt[0]=0, mangnt[1]=0;
    for(int i=2;i*i<=20005;i++)
    {
        if (mangnt[i]==1)
        {
            for(int j=i*i;j<=20005;j+=i)
                mangnt[j]=0;
        }
    }
}
int main()
{
    sang();
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int cnt=0;
        for (int i=n;i<=m;i++){
            if(mangnt[i])
                cnt++;
        }
        cout<<cnt<<endl;
    }   
    return 0;
}