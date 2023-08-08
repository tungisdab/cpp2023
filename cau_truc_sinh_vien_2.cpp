#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct SinhVien{
    string msv;
    string ten;
    string lop;
    string ns;
    float diem;
};
void nhapThongTinSV(SinhVien &a){
    a.msv="N20DCCN001";
    getline(cin, a.ten);
    cin>>a.lop>>a.ns>>a.diem;
    if(a.ns[1]=='/')
        a.ns='0'+a.ns;
    if(a.ns[4]=='/')
        a.ns.insert(3, "0");
}
void inThongTinSV(SinhVien a){
   cout << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.diem;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}