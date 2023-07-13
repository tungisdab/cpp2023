#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        map<int, int> a;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]++;
        }   
        int cnt=0; 
        for(auto i:a){
            if(i.second >1)
                cnt+=i.second;
        }
        cout<<cnt<<endl;
    }   
    return 0;
}