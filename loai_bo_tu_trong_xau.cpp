#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    string s;
    getline(cin, s);
    string a;
    getline(cin, a);
    string ss= s.erase(s.find(a), a.length());
    cout<<ss<<endl;   
    return 0;
}