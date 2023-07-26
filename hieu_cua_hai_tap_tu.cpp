#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s1;
        getline(cin, s1);
        string s2;
        getline(cin, s2);
        stringstream ss1(s1);
        stringstream ss2(s2);
        string tmp;
        set<string> st1;
        set<string> st2;
        while(ss1>>tmp){
            st1.insert(tmp);
        }
        while(ss2>>tmp){
            st2.insert(tmp);
        }
        for(auto i:st1){
            if(st2.count(i)==0)
                cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}