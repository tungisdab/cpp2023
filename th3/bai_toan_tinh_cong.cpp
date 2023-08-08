#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct NV{
    string s;
    ll luong;
    ll ngay;
    string CV;
};
int main()
{
    NV x;
    getline(cin, x.s);
    cin>>x.luong>>x.ngay;
    cin.ignore();
    getline(cin, x.CV);
    cout<<"NV01 "<<x.s<<" ";
    cout<<x.ngay*x.luong<<" ";
    float c=0;
    if(x.ngay>=25)
        c=0.2;
    else if(x.ngay>=22)
        c=0.1;
    else
        c=0;
    cout<<c*x.luong*x.ngay<<" ";
    ll phucap=0;
    if(x.CV[0]=='G')
        phucap=250000;
    if(x.CV[0]=='P')
        phucap=200000;
    if(x.CV[0]=='T')
        phucap=180000;
    if(x.CV[0]=='N')
        phucap=150000;
    cout<<phucap<<" ";
    ll tong=x.luong*x.ngay+phucap+c*x.luong*x.ngay;
    cout<<tong;
    return 0;
}