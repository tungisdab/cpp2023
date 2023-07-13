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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}