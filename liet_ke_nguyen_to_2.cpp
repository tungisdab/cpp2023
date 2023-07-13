#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int mangnt[10005]={};
void sang()
{
    for(int i=0;i<=10005;i++)
        mangnt[i]=1;
    mangnt[0]=0, mangnt[1]=0;
    for(int i=2;i*i<=10005;i++)
    {
        if (mangnt[i]==1)
        {
            for(int j=i*i;j<=10005;j+=i)
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
        int a,b;
        cin>>a>>b;
        for (int i=a;i<=b;i++){
            if(mangnt[i])
                cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}