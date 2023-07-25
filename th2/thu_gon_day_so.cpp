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
    stack<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(a.empty() || (a.top()+x)%2==1)
            a.push(x);
        else
            a.pop();
    }   
    cout<<a.size()<<endl;
    return 0;
}