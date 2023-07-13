#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int cnt1=0;
        int cnt2=0;
        int a=0;
        for (int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                if(i!=a){
                    cnt2++;
                    a=i;    
                }
                cnt1++;
                n/=i;
            }
        }    
        if(n>1){
            cnt1++;
            cnt2++;
        }
        if(cnt1==3 && cnt2==3)
            cout<<"1";
        else    
            cout<<"0";
        cout<<endl;
    }   
    return 0;
}