#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
        int n, k;
        cin>>n>>k;
        int a[k+1]={0};  
        vector<int> b; 
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            if(a[x]==0){
                b.push_back(x);
                a[x]=1;
            }
            else{
                a[x]++;
            }
        }
        int m=0;
        int cc=0;
        int res=0;
        int cnt=0;
        int d=0;
        for(int i=0;i<=k;i++){
            if(a[i]>d){
                d=a[i];
                cnt++;
            }
        }
        for(auto i:b){
            if(a[i]>m){
                m=a[i];
            }
        }
        if(cnt==1){
            cout<<"NONE";
        }
        else{
            for(auto i:b){
                if(res<a[i] && a[i]<m){
                    res=a[i];
                }
            }
            for(auto i:b){
                if(a[i]==res){
                    cout<<i;
                    break;
                }
            }
        }
        cout<<endl;
    
    return 0;
}