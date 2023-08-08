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
    int n;
    cin>>n;
    set<int> a;
    int m=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.insert(x);
        if(x>m){
            m=x;
        }
    }
    int i=1;  
    int cc=0;
    while(i<=m){
        if(a.count(i)==0){
            cout<<i<<endl;
            cc=1;
        }
        i++;
    } 
    if(cc==0){
        cout<<"Excellent!";
    }
    return 0;
}