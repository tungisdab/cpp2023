#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    set<string> s;
    while(n--){
        string ss;
        getline(cin, ss);
        s.insert(ss);
    }
    cout<<s.size()<<endl;
    return 0;
}