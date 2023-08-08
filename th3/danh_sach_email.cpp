#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    set<string> a;
    string line;
    ifstream ipf;
    ipf.open("CONTACT.in");
    while(getline(ipf, line)){
        int n=line.length();
        for (int i=0;i<n;i++){
            line[i]=tolower(line[i]);
        }
        a.insert(line);
    }
    for(auto i:a){
        cout<<i<<endl;
    }
    ipf.close();
    return 0;
}