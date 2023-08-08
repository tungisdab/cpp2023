#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int check(string s){
    int n=s.length();
    for (int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return 0;
        }
    }
    return 1;
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
        int n=s.length();
        for (int i=0;i<n;i++){
            s[i]=toupper(s[i]);
        }
        string ss="";
        for (int i=0;i<n;i++){
            if(s[i]=='A' || s[i]=='B' || s[i]=='C'){
                ss+='2';
            }
            if(s[i]=='D' || s[i]=='E' || s[i]=='F'){
                ss+='3';
            }
            if(s[i]=='G' || s[i]=='H' || s[i]=='I'){
                ss+='4';
            }
            if(s[i]=='J' || s[i]=='K' || s[i]=='L'){
                ss+='5';
            }
            if(s[i]=='M' || s[i]=='N' || s[i]=='O'){
                ss+='6';
            }
            if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S'){
                ss+='7';
            }
            if(s[i]=='T' || s[i]=='U' || s[i]=='V'){
                ss+='8';
            }
            if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z'){
                ss+='9';
            }
        }
        if(check(ss)){
            cout<<"YES";
        }
        else
            cout<<"NO";
        cout<<endl;
    }   
    return 0;
}