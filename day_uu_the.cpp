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
    cin.ignore();
    while (t--)
    {
        int n=0;
        int c=0;
        int l=0;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss>>tmp){
            int x=stoi(tmp);
            n++;
            if(x%2==0)
                c++;
            else
                l++;
        }
        if(((n%2==0)&&(c>l)) || ((n%2==1)&&(c<l))){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }   
    return 0;
}