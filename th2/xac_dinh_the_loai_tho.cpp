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
    vector<int> a;
    int d1=0, d2=0;
    while(n>0){
        n-=1;
        string s;
        getline(cin, s);
        int nn = s.length();
        int cnt=1;
        for(int i=0;i<nn;i++){
            if(s[i]!=' ' && s[i-1]==' '){
                cnt++;
            }
        }
        if(cnt==7){
            d2++;
            if(d1>0){
                a.push_back(1);
                d1=0;
            }
        }
        else{
            d1+=1;
        }
        if(d2==4){
            a.push_back(2);
            d2=0;
        }
        if(n==0 && d1>0){
            a.push_back(1);
        }
    }
    cout<<a.size()<<endl;
    for(auto i:a)
        cout<<i<<endl;
    return 0;
}