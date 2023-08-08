#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
bool cmp(int a, int b){
    return a>b;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin>>s;
        map<char,int> m;
        int n=s.length();
        for (int i=0;i<n;i++){
            m[s[i]]++;
        }
        vector<int> a;
        for(auto i:m){
            a.push_back(i.second);
        }
        sort(a.begin(),a.end(), cmp);
        if(a[0]-1 <= n - a[0])
            cout<<"1";
        else
            cout<<"0";
        cout<<endl;
    }
    
    return 0;
}