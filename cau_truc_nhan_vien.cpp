#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct NhanVien{
    string ten;
    string gt;
    string ns;
    string dc;
    string sdt;
    string ngay;
};
void nhap(NhanVien &a){
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.sdt);
    getline(cin, a.ngay);
}
void in(NhanVien a){
    cout<<"00001 "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.sdt<<" "<<a.ngay;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}