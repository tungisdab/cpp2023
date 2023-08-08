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
        int b[n];
        for (int i=0;i<n;i++){
            cin>>b[i];
        }        
        set<int> a;
        int x=-1;
        for (int i=0;i<n-1;i++){
            a.insert(b[i]);
            if(a.count(b[i+1])!=0){
                x=b[i+1];
                break;
            }
        }
        cout<<x<<endl;
    }   
    return 0;
}