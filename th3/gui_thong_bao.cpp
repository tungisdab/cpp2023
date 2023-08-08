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
        string s;
        getline(cin, s);
        string ss="";
        stringstream ss1(s);
        string tmp;
        int cnt=0;
        while(ss1>>tmp){
            if(tmp.size() <=(100-cnt)){
                ss = ss + tmp + ' ';
                cnt+=tmp.size()+1;
            }
            else    
                break;
        }   
        cout<<ss<<endl;
    }

    return 0;
}