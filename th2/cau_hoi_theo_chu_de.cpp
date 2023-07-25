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
    cin.ignore();
    int zz=0;
    int cnt=0;
    vector<string> a;
    vector<int> b;
    while(n>0){
        n-=1;
        string s;
        getline(cin, s);
        if(zz==0){
            a.push_back(s);
            zz=1;
        }
        else if(zz==1){
            int nn = s.length();
            int cnt1=0;
            int cnt2=0;
            for(int i=0;i<nn;i++){
                if(s[i]==' '){
                    cnt1++;
                }
                if(s[i]!=' ')
                    cnt2++;
            }
            cnt1++;
            if(cnt2==0)
                cnt1--;
            if(cnt1>0)
                cnt++;
            if(cnt1==0 || n==0){
                b.push_back(cnt);
                cnt=0;
                zz=0;
            }
        }
    }   
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<": "<<b[i]<<endl;
    }
    return 0;
}




