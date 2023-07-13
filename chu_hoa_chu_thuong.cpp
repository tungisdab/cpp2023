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
        char s;
        cin>>s;
        if(s<97)
            cout<<char(s+32)<<endl;
        else
            cout<<char(s-32)<<endl;   
    }   
    return 0;
}