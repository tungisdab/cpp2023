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
    string s1;
    getline(cin, s1);
    char id = s1[1];   
    int heSo = (s1[2]-'0')*10 + (s1[3]-'0');
    string s2;
    getline(cin, s2);
    // cin.ignore();
    ll luong;
    ll phuCap;
    cin>>luong;
    cout<<s1<<" "<<s2<<" "<<heSo<<" ";
    if(id == 'T'){
        cout<<"2000000";
        phuCap=2000000;
    }
    else if(id == 'P'){
        cout<<"900000";
        phuCap=900000;
    }
    else{
        cout<<"500000";
        phuCap=500000;
    }    
    cout<<" ";
    cout<<luong*heSo+phuCap;
    return 0;
}